# -*- coding: utf-8 -*-
"""
Created on Thu Sep 12 21:39:47 2019

@author: DaniloLima
"""
from vpython import *
while(True):
    #CRIANDO O CHÃO
    chao=box(pos=vector(0,-10,0), size=vector(50,0.1,5), texture=textures.wood)
    
    #CRIANDO A BOLA
    bola=sphere(pos=vector(-25,10,0), radius=0.6, color=vector(1,0,0))
    
    #ADQUIRINDO A ALTURA INICIAL
    H_inicial=bola.pos.y
    
    
    #DECLARANDO OS VALORES
    velocidade=vector(3,0,0)#velocidade inicial
    gravidade=10#aceleração da gravidade
    contin=True #para parar o loop, coloque contin = True dentro do looping
    #intervalo 'infinitesimal" do tempo
    dt=0.001
    
    
    #COEFICIENTE DE RESTIRUIÇÃO ELÁSTICO (e=1: conserva energia; e=0 "gruda" no chão;)
    #e=1: colisão perfeitamente elástica
    #<e<1: colisão parcialmente elástica
    #e=1: colisão perfeitamente elástica
    #e>1: colisão super elástica, isto é, aumenta-se a energia do sistema
    e=0.80
    
    
    while(contin==True):
        rate(1000)
        bola.pos=bola.pos+velocidade*dt #calculando a velocidade instantânea
        if bola.pos.y<chao.pos.y+bola.radius+chao.size.y/2:
            velocidade.y=-e*velocidade.y
        else:
            velocidade=velocidade-vector(0,gravidade*dt,0)
            
        if bola.pos.x>=chao.pos.x+chao.size.x/2:
            bola.visible=False
            contin=False

        
