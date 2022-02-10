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

#Criando cenário
scene.center=vector(600,400,0)
scene.width= 1000
scene.height= 500
piso = box(pos=vector(200,1, 0), size=vector(2000,20,600),color=color.white)
parede = box(pos =vector(1190, 395, 0), size=vector(20,800,600),color=color.white)

esferaA=sphere(pos=vector(-600,60,0), radius=60, color=color.red)
esferaB=sphere(pos=vector(0,60,0), radius=60, color=color.green)
nomeA=text(pos=esferaA.pos+vector(-30,100,0), text="A", height=50)
nomeB=text(pos=esferaB.pos+vector(-30,100,0), text="B", height=50)
imagem_esferaB=sphere(pos=vector(2450,60,0), radius=60, color=vector(0,100,0))
nomeB_imagem=text(pos=imagem_esferaB.pos+vector(-30,100,0), text="B'", height=50)



#esperando para iniciar a gravação pelo programa de capitura de tela

i=0
print("Digite 1 para iniciar")
while i==0:
    i=input()
    rate(1)





#movimento antes da colisão
i=0
for i in range(50):
    esferaA.pos=vector(-600+10*i,60,0)
    nomeA.pos=esferaA.pos+vector(-30,100,0)
    rate(60)
i=0




#tracejado da esquerda
for i in range(10):
    rate(100)
box(pos=vector(-100,800,0), size=vector(10,100,20))
i=0
for i in range(10):
    rate(100)
box(pos=vector(-100,600,0), size=vector(10,100,20))
i=0
for i in range(10):
    rate(100)
box(pos=vector(-100,400,0), size=vector(10,100,20))
i=0
for i in range(10):
    rate(100)
box(pos=vector(-100,200,0), size=vector(10,100,20))




# apos a colisão
i=0
for i in range(570):
    esferaA.pos=vector(-100+i,60,0)
    nomeA.pos=esferaA.pos+vector(-30,100,0)    
    if i<383:
        esferaB.pos=vector(3*i,60,0)
        imagem_esferaB.pos=vector(2450-3*i,60,0)
    if i>383:
        esferaB.pos=vector(2296-3*i,60,0)
        imagem_esferaB.pos=vector(152+3*i,60,0)
    rate(60)
    nomeB.pos=esferaB.pos+vector(-30,100,0)
    nomeB_imagem.pos=imagem_esferaB.pos+vector(-30,100,0)





#tracejado da direita
i=0
for i in range(10):
    rate(100)
box(pos=vector(530,800,0), size=vector(10,100,20))
i=0
for i in range(10):
    rate(100)
box(pos=vector(530,600,0), size=vector(10,100,20))
i=0
for i in range(10):
    rate(100)
box(pos=vector(530,400,0), size=vector(10,100,20))
i=0
for i in range(10):
    rate(100)
box(pos=vector(530,200,0), size=vector(10,100,20))
i=0


#seta indicando a distância percorrida
seta_d = arrow(pos=vector(210,600,0), axis=vector(320,0,0), color= color.yellow)
seta_e = arrow(pos=vector(220,600,0), axis=vector(-320,0,0), color= color.yellow)
i=0
for i in range(10):
    rate(100)
text(pos=vector(10,700,0), text="1,6 m", depth=50, height=100)






