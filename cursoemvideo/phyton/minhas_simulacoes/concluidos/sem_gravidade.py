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

#biblioteca para uso da função visual
from vpython import *
#biblioteca com funções matemáticas
from math import *

expandir_a_cena=box(size=vector(1,80,0), color=color.black)
#criando o sol
R=30 #raio da órbira
sol=sphere(pos=vector(0,0,0), radius=5, color=color.yellow)
text(pos=vector(-2,-10,0), text="Sol", depth=0.5, height=2)
planeta=sphere(pos=vector(R,0,0), radius=1, color=color.blue)
terra=text(pos=vector(R+5,0,0), text="Terra", depth=0.5, height=2)

i=0
for i in range(1250):
    rate(100)
    planeta.pos=vector(R*cos(i*2*pi/1000),R*sin(i*2*pi/1000),0)
    terra.pos=vector(R*cos(i*2*pi/1000),R*sin(i*2*pi/1000)+5,0)
    if  i==0 or i==50 or i==100 or i==150 or i==200 or i==250 or i==300 or i==350 or i==400 or i==450 or i==500 or i==550 or i==600 or i==650 or i==700 or i==750 or i==800 or i==850 or i==900 or i==950:
        sphere(pos=vector(R*cos(i*2*pi/1000),R*sin(i*2*pi/1000),0), color=color.green)

i=0
for i in range(550):
    rate(160)
    if i==100 or i==200 or i==300 or i==400 or i==500:
        sphere(pos=vector(-i/10,30,0), color=color.green)

    planeta.pos=vector(-i/10,30,0)
    terra.pos=vector(-i/10,35,0)

planeta.color=color.black
terra.color=color.black
