from random import randint
n = randint(0,5)
escolha=int(input('Adivinhe em que número, de 0 à 5, estou pensando...\n'))
if n==escolha:
    print('Parabéns, você acertou!!!')
else:
    print('Você errou! Eu pensei no número {}.'.format(n))