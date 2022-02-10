from random import randint, shuffle
print('SORTEIO DE ALUNO\nColoque o nome do aluno à frente do nome correspondete.')
a1=str(input('Digite o nome do(a) aluno(a) 1:\n'))
a2=str(input('\nDigite o nome do(a) aluno(a) 2:\n'))
a3=str(input('\nDigite o nome do(a) aluno(a) 3:\n'))
a4=str(input('\nDigite o nome do(a) aluno(a) 4:\n'))
lista=[a1, a2, a3, a4]
shuffle(lista)
print('Escolhendo usando a função choice:\n{}'.format(lista))