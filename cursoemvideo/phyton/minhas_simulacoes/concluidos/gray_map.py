from math import sqrt, sin, pi
from numpy import empty
from pylab import imshow, gray, show
wavelenght=5
xi0=1.0
k=2*pi/wavelenght
separation=20
side=100.0
points=500
spacing=side/points


x1=side/2+separation/2
y1=side/2
x2=side/2-separation/2
y2=side/2


xi=empty([points, points], float)


for i in range(points):
	y=spacing*i
	for j in range(points):
		x=spacing*j
		r1=sqrt((x-x1)**2+(y-y1)**2)
		r2=sqrt((x-x2)**2+(y-y2)**2)
		xi[i,j]=xi0*sin(k*r1)+xi0*sin(k*r2)

		
imshow(xi, origin="lower", extent=[0,side,0,side])
gray()
show()
