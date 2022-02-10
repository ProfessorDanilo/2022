#from pylab import plot, show
#from math import sin
#from numpy import linspace



#xpoints=[]
#ypoints=[]
#for x in linspace(0,10,100):
#    xpoints.append(x)
#    ypoints.append(sin(x))

#plot(xpoints,ypoints)
#show()




from vpython import *
L=5
R1=0.2
for i in range(-L,L+1):
    for j in range(-L,L+1):
        for k in range(-L,L+1):
            sphere(pos=vector(i,j,k), radius=R1, color=color.red)
R2=0.3
for i in range(-L,L+1):
    for j in range(-L,L+1):
        for k in range(-L,L+1):
            sphere(pos=vector(i+0.5,j+0.5,k+0.5), radius=R2, color=color.green)


            
