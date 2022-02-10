from vpython import *
import time
t=0.05
scene.range=(10,10,10)
scene.center=vector(0,0,0)
scene.width= 500
scene.height= 500
sphere()
for i in range(0,100):
    for j in range(0,100):
        scene.background=vector(0,0,0)
        time.sleep(t)
        for k in range(0,100):
            scene.background=vector(255,0,0)
            time.sleep(t)
            scene.background=vector(255,127,0)
            time.sleep(t)
            scene.background=vector(255,255,0)
            time.sleep(t)
            scene.background=vector(127,255,0)
            time.sleep(t)
            scene.background=vector(0,255,0)
            time.sleep(t)
            scene.background=vector(0,255,127)
            time.sleep(t)
            scene.background=vector(0,255,255)
            time.sleep(t)
            scene.background=vector(0,127,255)
            time.sleep(t)
            scene.background=vector(0,0,255)
            time.sleep(t)
            scene.background=vector(125,0,255)
            time.sleep(t)
            scene.background=vector(255,0,255)
            time.sleep(t)
            scene.background=vector(255,0,125)
            time.sleep(t)
