from math import sin, pi
i=1
while i==1:
    print("Digite o ângulo (grau inteiro) que quer saber o seno")
    theta=int(input())
    print("O seno de ",theta," é ",sin(theta*pi/180))
    print("Continual? \n(0) -> NÃO\n(1) -> SIM")
    i=int(input())
    
