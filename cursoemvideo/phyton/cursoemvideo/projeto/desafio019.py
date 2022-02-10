from random import randint, choice
print('SORTEIO DE ALUNO\nColoque o nome do aluno à frente do nome correspondete.')
a1=str(input('Digite o nome do(a) aluno(a) 1:\n'))
a2=str(input('\nDigite o nome do(a) aluno(a) 2:\n'))
a3=str(input('\nDigite o nome do(a) aluno(a) 3:\n'))
a4=str(input('\nDigite o nome do(a) aluno(a) 4:\n'))
a5=str(input('\nDigite o nome do(a) aluno(a) 5:\n'))
a6=str(input('\nDigite o nome do(a) aluno(a) 6:\n'))
a7=str(input('\nDigite o nome do(a) aluno(a) 7:\n'))
a8=str(input('\nDigite o nome do(a) aluno(a) 8:\n'))
a9=str(input('\nDigite o nome do(a) aluno(a) 9:\n'))
a10=str(input('\nDigite o nome do(a) aluno(a) 10:\n'))
escolhido=randint(1,10)
print('\n\nO(A) aluno(a) sorteado(a) foi o(a) de Número\n\n        {}\nQue corresponde à:'.format(escolhido))
lista=[a1, a2, a3, a4, a5, a6, a7, a8, a9, a10]
print(lista[escolhido-1])

escolhido=choice(lista)
print('Escolhendo usando a função choice:\n{}'.format(escolhido))