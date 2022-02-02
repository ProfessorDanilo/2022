from vpython import *
#scene.range=(10,10,10)
scene.center=vector(0,0,0)
#scene.background=vector(255,0,0)
scene.width= 500
scene.height= 700
# Cria objetos envolvidos bola e piso no fenômeno
#piso = box(pos =vector(0, -6, 0), size=vector(12,0.2,12),color=color.cyan)
dt = 0.01 # em segundos.
g = 9.8 # em m/s2
t = 0 # tempo inicial
e = 1.0 # coeficiente de restituição
h = 15
bolapos=vector(0, h, 0)
bolavelocidade = vector(0,-1.5,0)
bolaaceleracao = vector(0, -g, 0)
y = bolapos
bola = sphere(pos=y, radius = 0.5, color =color.red)
vy = bolavelocidade
i=0
j=38
bv = arrow(pos=bolapos, axis=bolavelocidade, color= color.yellow)
bola.trail = curve(color = bola.color)
while( i<j):
    rate(10)
    bolavelocidade = bolavelocidade+bolaaceleracao*t
    y = vector(0, h, 0)+bolavelocidade*t+0.5*bolaaceleracao*t**2
    bola.pos = y
#    if (bolapos.y - 0.5) < -6:
#        bolavelocidade.y = - e*bolavelocidade.y
    bv.pos = y
    bv.axis = 0.1*bolavelocidade
    #bola.trail.append(pos = y)
    t = t + dt
    i=i+1
