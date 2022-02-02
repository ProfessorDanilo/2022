from vpython import *
from math import *
#scene.range=(10,10,10)
scene.center=vector(0,0,0)
#scene.background=vector(255,0,0)
scene.width= 500
scene.height= 700
# Cria objetos envolvidos bola e piso no fenômeno
piso = box(pos =vector(0, -6, 0), size=vector(12,0.2,12),color=color.white)
teto = box(pos =vector(0, 0, 0), size=vector(12,0.2,12),color=color.green)


coluna1 = box(pos =vector(-5, -3, -5), size=vector(1,6,1),color=color.cyan)
coluna2 = box(pos =vector(-5, -3, 5), size=vector(1,6,1),color=color.cyan)
coluna3 = box(pos =vector(5, -3, 5), size=vector(1,6,1),color=color.cyan)
coluna4 = box(pos =vector(5, -3, -5), size=vector(1,6,1),color=color.cyan)


parede1 = box(pos =vector(-6, -3, 0), size=vector(0.5,6.15,12),color=color.red)
parede2 = box(pos =vector(+6, -3, 0), size=vector(0.5,6.15,12),color=color.red)
parede3 = box(pos =vector(0, -3, -6), size=vector(12,6.15,0.5),color=color.red)

parede41 = box(pos =vector(-3, -3, 6), size=vector(6,6.15,0.5),color=color.red)
parede42 = box(pos =vector(4, -3, 6), size=vector(4,6.15,0.5),color=color.red)
parede43 = box(pos =vector(1, -1, 6), size=vector(2,2.15,0.5),color=color.red)

Portal = box(pos = vector(-0.24,-4.05,6), size=vector(0.5,4.1,0.8),color=color.white)
Porta2 = box(pos = vector(2.24,-4.05,6), size=vector(0.5,4.1,0.8),color=color.white)
Porta3 = box(pos = vector(1,-2,6), size=vector(2.8,0.5,0.8),color=color.white)
Porta_frente = box(pos = vector(1,-4.05,6), size=vector(2,4,0.4),color=color.green)
macaneta1=sphere(pos=vector(0.3,-4.1,6.5), radius=0.15)
macaneta2=cylinder(pos=vector(0.3,-4.1,6), radius=0.1, axis=vector(0,0,0.5))



##fumaca1=sphere(pos=vector(0.1,4,0),radius=0.7, color=color.white)
##fumaca2=sphere(pos=vector(-0.5,4.1,0.5),radius=0.3, color=color.white)
##fumaca3=sphere(pos=vector(0.1,4.5,0.1),radius=0.5, color=color.white)
##fumaca4=sphere(pos=vector(0.3,4.2,-0.7),radius=0.4, color=color.white)
fumaca=sphere(pos=vector(0.1,3.3,0),radius=0.2, color=color.white)

i=0
while (i<16):
    teto1 = box(pos=vector(i*0.5,3-0.2*i,0), size=vector(0.5,0.2,13),color=color.blue)
    teto2 = box(pos=vector(-i*0.5,3-0.2*i,0), size=vector(0.5,0.2,13),color=color.blue)
    teto_frente1 = box(pos=vector(i*0.25,2.9-0.2*i,6), size=vector(i*0.5,0.2,0.1),color=color.white)
    teto_frente2 = box(pos=vector(-i*0.25,2.9-0.2*i,6), size=vector(i*0.5,0.2,0.1),color=color.white)
    teto_traz1 = box(pos=vector(i*0.25,2.9-0.2*i,-6), size=vector(i*0.5,0.2,0.1),color=color.white)
    teto_traz2 = box(pos=vector(-i*0.25,2.9-0.2*i,-6), size=vector(i*0.5,0.2,0.1),color=color.white)
    i=i+1

j=0
while(j<1000):
    k=0
    j=j+1
    while(k<1000):
        fumaca.pos=vector(4*cos(j/10),cos(k)*(5+j/100)+5,sin(j/3))
        fumaca.pos=vector(4*cos(j/10)+1,cos(k)*(5+j/100)+5,sin(j/3)-1)
        fumaca.pos=vector(4*cos(j/10)+2,cos(k)*(5+j/100)+5,sin(j/3)+3)
        fumaca.pos=vector(4*cos(j/10)+1,cos(k)*(5+j/100)+5,sin(j/3)-2)
        fumaca.pos=vector(4*cos(j/10)-1,cos(k)*(5+j/100)+5,sin(j/3)+1)
        fumaca.pos=vector(4*cos(j/10)-1,cos(k)*(5+j/100)+5,sin(j/3)+2)
        fumaca.pos=vector(4*cos(j/10)-2,cos(k)*(5+j/100)+5,sin(j/3)-1)
        fumaca.pos=vector(4*cos(j/10)-1,cos(k)*(5+j/100)+5,sin(j/3)-2)
        fumaca.pos=vector(4*cos(j/10)+1,cos(k)*(5+j/100)+5,sin(j/3)-3)
        fumaca.pos=vector(4*cos(j/10)-1,cos(k)*(5+j/100)+5,sin(j/3)+3)
        fumaca.pos=vector(4*cos(j/10)+2,cos(k)*(5+j/100)+5,sin(j/3)-3)
        fumaca.pos=vector(4*cos(j/10)+1,cos(k)*(5+j/100)+5,sin(j/3)+2)
        k=k+1
        rate(250)
##dt = 0.01 # em segundos.
##g = 9.8 # em m/s2udelis:)
##t = 0 # tempo inicial
##e = 1.0 # coeficiente de restituição
##h = 15
##bolapos=vector(0, h, 0)
##bolaposin=vector(0,h,0)
##bolavelocidade = vector(0,-1.5,0)
##bolaaceleracao = vector(0, -g, 0)
##y = bolapos
##bola = sphere(pos=y, radius = 0.5, color =color.red)
##vy = bolavelocidade
##bv = arrow(pos=bolapos, axis=bolavelocidade, color= color.yellow)
##bola.trail = curve(color = bola.color)
##while( 1==1):
##    rate(1)
##    bolavelocidade = bolavelocidade+bolaaceleracao*t
##    y = bolaposin+bolavelocidade*t+0.5*bolaaceleracao*t**2
##    bola.pos = y
####    print(t)
##    print(y)
####    print(bola.pos.y)
##    if (bola.pos.y-0.5) < -6:
##        bolavelocidade = -e*bolavelocidade
##        bolaposin=vector(0,-6,0)
##        t=0
##    bv.pos = y
##    bv.axis = 0.1*bolavelocidade
##    #bola.trail.append(pos = y)
##    t = t + dt
