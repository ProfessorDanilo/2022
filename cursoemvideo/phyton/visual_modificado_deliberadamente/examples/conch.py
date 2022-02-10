from vpython import *
from math import *
# Kadir Haldenbilen, Feb. 2011

scene.height = scene.width = 800
scene.center = vector(0.3,-2.4,0)

def spiral(nloop=1, tightness=1.0, dir=1.0, scale=1.0):

    spr = []
    scale = []
    clrs = []
    zd = 0.01
    for t in range(1, 1024*nloop, 16):
        t *= 0.01
        x = tightness/10.0 * t * cos(t)*dir
        y = tightness/10.0 * t * sin(t)
        sc = sqrt(x*x+y*y)
        z = t/7.0
        spr.append((x,y,z))
        clr = vector((z*cos(t), abs(sin(t)),abs(cos(t*2)))).norm()
        clrs.append(clr)
        scale.append((sc,sc))
    return spr, scale, clrs

path, scale, clrs = spiral(nloop=2, tightness=0.8)
elps = shapes.circle(radius=0.69, thickness=0.01)

ee = extrusion(shape=elps, pos=path, scale=scale, color=clrs, material=materials.marble)
ee.rotate(angle=pi/2)

