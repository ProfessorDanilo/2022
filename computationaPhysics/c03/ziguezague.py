from vpython import *
from math import *
#scene.range=(10,10,10)
scene.center=vector(0,0,0)
#scene.background=vector(255,0,0)
scene.width= 1000
scene.height= 700
##x=0
##y=0
##z=0
##r=vector(x, y, z)
bola = sphere(pos=vector(0,0,0), radius = 1, color =color.red)
i=0
j=1000
while( i<j):
    rate(10)
##    x=500*(1+sin(i))
##    y=350*(1+sin(0.01*i))
##    z=0
    r = vector(i, 0.7*i, 0)
    bola.pos = r

