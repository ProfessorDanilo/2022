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

##Questão da unicamp de 1997
##ENUNCIADO
##(UNICAMP 1997) Jogadores de
##sinuca e bilhar sabem que, após uma
##colisão não frontal de duas bolas A e
##B de mesma massa, estando a bola B
##inicialmente parada, as duas bolas
##saem em direções que formam um
##ângulo de 90°. Considere a colisão de
##duas bolas de 200 g, representada na
##figura a seguir. A se dirige em direção
##a B com velocidade V=2,0 m/s
##formando um ângulo  com a direção
##y tal que sen=0,80.
##Após a colisão, B sai na direção y.
##a) Calcule as componentes x e y das velocidades de A e B logo após a
##colisão.
##b) Calcule a variação da energia (cinética de translação) na colisão.
##NOTA: Despreze a rotação e o rolamento das bolas.


#biblioteca para uso da função visual
from vpython import *
#biblioteca com funções matemáticas
from math import *



posicao=vector(0,0,0)

#Bola B
bolaB=sphere(pos=posicao, radius=5,color=color.green)
textoB=text(pos=posicao+vector(-10,-1,0), text="B", depth=1, height=2.5)

#Bola A
bolaA=sphere(pos=posicao+vector(-30,-30,0), radius=5, color=color.red)
textoA=text(pos=posicao+vector(-40,-31,0), text="A", depth=1, height=2.5)

#vetor velocidade
velocidadeB = arrow(pos=posicao+vector(-30,-30,0), axis=vector(0,0,0), color= color.yellow)
velocidadeA = arrow(pos=posicao+vector(-25,-25,0), axis=vector(10,10,0), color= color.yellow)
j=1
for i in range(550):
    rate(100)
    if i<230:
        bolaA.pos=vector(-30+0.1*i,-30+0.1*i,0)
        textoA.pos=vector(-30+0.1*i,-30+0.1*i,0)+vector(-10,-1,0)
        velocidadeA.pos=vector(-30+0.1*i,-30+0.1*i,0)
        j=2
        
    if i>230:
        if j<3:
            velocidadeB.axis=vector(0,11,0)
            velocidadeA.axis=vector(13,0,0)
            j=j+5
        else:
            bolaA.pos=vector(-30+0.1*i,-7,0)
            textoA.pos=vector(-30+0.1*i,-7,0)+vector(-10,-1,0)
            velocidadeA.pos=vector(-30+0.1*i,-7,0)
            bolaB.pos=vector(0,0.1*i-23,0)
            textoB.pos=vector(0,0.1*i-23,0)+vector(-10,-1,0)
            velocidadeB.pos=vector(0,0.1*i-23,0)
    
    










