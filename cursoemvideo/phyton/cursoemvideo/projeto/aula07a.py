nome=input('Qual é o seu nome? ')
#print normal
print('Prazer em te conhecer {}!' .format(nome))

#print com nome sendo escrito em um espaço de 20 caracteres:
print('Prazer em te conhecer {:20}!' .format(nome))

#idem anterior com o nome alinhado à direita
print('Prazer em te conhecer {:>20}!' .format(nome))

#alinhado à esquerda
print('Prazer em te conhecer {:<20}!' .format(nome))

#centralizado
print('Prazer em te cohecer {:^20}!' .format(nome))

#preenchendo os espaços
#com =
print('Prazer em te conhecer {:=^20}!' .format(nome))
#com -
print('Prazer em te conhecer {:-^20}!' .format(nome))
#com +
print('Prazer em te conhecer {:+^20}!' .format (nome))
#com underline fica melhor
print('Prazer em te conhecer {:_^20}!' .format(nome))




##################################
## uso de quebras de linha, emenda de linha
## e outros casos com o print
##################################

n1=int(input('Digite um valor: '))
n2=int(input('Digite outro valor: '))
s=n1+n2
m=n1*n2
d=n1/n2
di=n1//n2
e=n1**n2
print('A soma é {}\no produto é {}\ne a divisão é {:3f}' .format(s, m, d), end='')
print('.')
#o end'' serve para adicionar o caracter entre ' no lugar da quebra de linha
print('Divisão inteira {} \ne potência {}.' .format(di, e))

