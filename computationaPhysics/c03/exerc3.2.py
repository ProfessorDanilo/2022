from numpy import loadtxt, linspace, sin, cos, exp #seno e cosseno aqui pode ser usado em array
from pylab import plot, xlabel, ylabel, show
from math import pi
from time import sleep

theta = linspace(0,2*pi,100)
x=2*cos(theta)+cos(2*theta)
y=2*sin(theta)-sin(2*theta)
plot(x,y)
show()

#Espiral de Galileu
theta = linspace(0,20*pi,1000)
x2=theta*theta*cos(theta)
y2=theta*theta*sin(theta)
plot(x2,y2)
show()

#Função de Fey
theta = linspace(0,24*pi,1000000)
r=exp(cos(theta))-2*cos(4*theta)+(sin(theta/12))**2
x3=r*cos(theta)
y3=r*sin(theta)
plot(x3,y3)
show()
