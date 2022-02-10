##por professordanilo
##site professordanilo.com
##notas de aulas para a escolha Elite Campinas
##Todos os direitos reservados
##Uso livre, citar a fonte
##2018 - Danilo Lima
##Canal youtube
##\c\professordanilo
##
##aproveite
##





##SISTEMA MASSA MOLA - SIMULANDO MHS
from __future__ import division
from vpython import *
from math import *
scene.width=600
scene.height=600

#constantes
k=0.1 #constante elastica
a=1 #dimensão da caixa (cubica)
L=2
L0=1 #comprimento da mola relaxada
m=0.001
g=9.8



#Objetos
chao=box(length=5, width=1, height=0.1, color=color.green)
parede=box(pos=vector(-chao.length/2,0.5+chao.height/2,0), length=0.1, width=1, height=1.1, color=color.green)
massa=box(pos=vector(0,a/2+chao.height/2,0),length=a, width=a, height=a, color=color.white)
mola=helix(pos=parede.pos+vector(parede.length/2,0,0), axis=massa.pos-vector(a/2,0,0)-parede.pos, radius=a/4, color=color.cyan)


A=L-L0
w=sqrt(k/m)
print('A amplitude do movimento é:', A, ' m\nA frequencia é', w/(2*pi),'Hz')


#Calculos
i=0
while i<10000:
	rate(100)
	t=i/1000
	posicao=A*cos(w*t)
	massa.pos=vector(posicao, a/2+chao.height/2,0)
	mola.axis=(massa.pos-vector(a/2,0,0)-parede.pos)
	
	
	i=i+1
	
	











