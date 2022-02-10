from vpython import *
scene.range=(10,10,10)
scene.center=vector(0,0,0)
scene.background=vector(255,0,0)
scene.width= 500
scene.height= 500
# Cria objetos envolvidos bola e piso no fenômeno
piso = box(pos =vector(0, -6, 0), size=vector(12,0.2,12),color=color.cyan)
dt = 0.01 # em segundos.
g = 9.8 # em m/s2
t = 0 # tempo inicial
e = 1.0 # coeficiente de restituição
h = 5
bolapos=vector(0, h, 0)
bolavelocidade = vector(0,-1.5,0)
bolaaceleracao = vector(0, -g, 0)
y = bolapos
bola = sphere(pos=y, radius = 0.5, color =color.red)
vy = bolavelocidade
bv = arrow(pos=bolapos, axis=bolavelocidade, color= color.yellow)
bola.trail = curve(color = bola.color)
while( 1==1):
    rate(100)
    bolavelocidade += bolaaceleracao*dt
    bolapos += bolavelocidade*dt+1
    0.5*bolaaceleracao*dt**2
if (bolapos.y - 0.5) < piso.y:
     bolavelocidade.y = - e*bolavelocidade.y
bv.pos = bolapos
bv.axis = 0.5*bolavelocidade
bola.trail.append(pos = bolapos)
t = t + dt
