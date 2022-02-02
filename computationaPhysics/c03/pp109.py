#interferencia de ondas
from math import sqrt, sin, pi
from numpy import empty
from pylab import imshow, gray, show
wavelength = 5.0
k=2*pi/wavelength
xi0=1.0
separation=20.0     #separação dos centros em centímetros
side =200.0         #lado do quadrado em cm
points =1000         #número de pontos de grade ao longo de cada eixo
spacing=side/points #espaçamento dos pontos em cm


#calculando a posição do centro dos círculos
x1= side/2+separation/2
y1=side/2
x2=side/2-separation/2
y2=side/2


#faça um arranjo para estocar as alturas
xi=empty([points,points],float)

#calculando os valores no arranjo
for i in range(points):
    y=spacing*i
    for j in range(points):
        x=spacing*j
        r1=sqrt((x-x1)**2+(y-y1)**2)
        r2=sqrt((x-x2)**2+(y-y2)**2)
        xi[i,j]=xi0*sin(k*r1)+xi0*sin(k*r2)



#plotar
imshow(xi, origin="lower", extent=[0,side,0,side])
gray()
show()
