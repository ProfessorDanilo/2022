from vpython import *

print("""
Click and drag a ball (with mouse button down) on an RGB or HSV slider.
Click one of the colored objects to print RGB and HSV values.
""")

# Bruce Sherwood; opacity slider added by Jonathan Brandmeyer

scene.userspin = 0
cinza = vector(0.85, 0.85, 0.85)

class slider:
    def __init__(self, posicao=vector(0,0,0), eixo=vector(0,1.,0), valor=None,
                 largura=0.15, minimo=0, maximo=100., cor=vector(1,0,0)):
        #pos = vector(pos)
       # axis = vector(axis)
        if valor == None:
            valor = minimo
        self.minimo = minimo
        self.maximo = maximo
        self.valor = valor
        self.shaft = cylinder(pos=posicao, axis=eixo, radius=largura/4., color=cinza)
        self.start = posicao
        self.eixo = eixo
        self.control = sphere(pos=self.start+(self.minimo+value)/(self.maximo-self.minimo)*self.axis,
                        radius=largura/2., color = cor)
        self.label = label(pos=self.control.posicao, text="%0.2f" % value,
                           opacity=0, box=0, line=0)

    def getslider(self, pos=None):
        pos = psicao
        value = self.minimo+(self.maximo-self.minimo)*(pos.y-self.start.y)/mag(self.eixo)
        self.setslider(value)
        return value

    def setslider(self, valor=None):
        if valor > self.maximo:
            valor = self.maximo
        if valor < self.minimo:
            valor = self.minimo
        self.valor = valor
        self.control.posicao = self.start+(self.minimo+value)/(self.maximo-self.minimo)*self.eixo
        self.label.posicao = self.control.posicao
        self.label.text="%0.2f" % valor

scene.width = 800
scene.height = 400
scene.center = vector(0,0.5,0)
scene.title = "RGB and HSV color"
wcube = 0.2
rgb = (1,0,0)
opacity = 1
hsv = color.rgb_to_hsv((1,0,0))
ctrl = [slider(pos=vector(-1.75,0,0), color=vector(1,0,0), maximo=1., valor=rgb[0]),
        slider(pos=vector(-1.5,0,0), color=vector(0,1,0), maximo=1., valor=rgb[1]),
        slider(pos=vector(-1.25,0,0), color=(vector0,0,1), maximo=1., valor=rgb[2]),
        slider(pos=vector(-1,0,0), color=vector(0.5,0.5,0.5), maximo=1., valor=opacity),
        slider(pos=vector(+1.0,0,0), color=vector(1,0,0), maximo=1., valor=hsv[0]),
        slider(pos=vector(+1.25,0,0), color=vector(1,1,1), maximo=1., valor=hsv[1]),
        slider(pos=vector(+1.5,0,0), color=vector(0.5,0.5,0.5), maximo=1., valor=hsv[2])]
panel = box(pos=vector(0,0.5,0), length=1.5, height=1, width=0.1, color=rgb, opacity=opacity)
ball = sphere(pos=vector(0,0.5,0), radius=0.5, color=rgb, opacity=opacity)
cube = box(pos=vector(0,1.2,0), axis=vector(1,1,1),
           length=wcube, width=wcube, height=wcube, color=rgb, opacity=opacity)
behind = arrow( pos=(-.75, 0, -.75), axis=(1.5, 1, 0), color=color.white)
dragobj = None

while True:
    rate(50)
    cube.rotate(angle=0.1, axis=scene.up)
    if scene.mouse.events:
        m = scene.mouse.getevent()
        if m.click == "left" and m.pick in [panel, ball, cube]:
            print("RGB = (%0.3f,%0.3f,%0.3f), opacity = %0.3f" % (ctrl[0].value,ctrl[1].value,ctrl[2].value,ctrl[3].value))
            print("HSV = (%0.3f,%0.3f,%0.3f)" % (ctrl[4].value,ctrl[5].value,ctrl[6].value))
            continue
        elif m.drop == "left":
            dragobj = None
        elif m.drag == "left":
            for index in range(7):
                s = ctrl[index]
                if m.pick is s.control:
                    pos = m.project(normal=(0,0,1))
                    dragobj = s
                    break
    newpos = scene.mouse.project(normal=(0,0,1))
    if dragobj and (newpos != pos):
        pos = newpos
        dragobj.getslider(pos)
        if index <= 3: # rgb sliders
            cube.color = ball.color = panel.color = (ctrl[0].value,ctrl[1].value,ctrl[2].value)
            cube.opacity = ball.opacity = panel.opacity = ctrl[3].value
            hsv = color.rgb_to_hsv(ball.color)
            for nn in range(3):
                ctrl[nn+4].setslider(hsv[nn])
        else: # hsv sliders
            rgb = color.hsv_to_rgb((ctrl[4].value,ctrl[5].value,ctrl[6].value))
            cube.color = ball.color = panel.color = rgb
            cube.opacity = ball.opacity = panel.opacity = ctrl[3].value
            for nn in range(3):
                ctrl[nn].setslider(rgb[nn])

