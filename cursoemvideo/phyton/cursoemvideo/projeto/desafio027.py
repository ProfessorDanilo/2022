nome=input('Insira seu nome completo, sem abreviações:\n')
primeiro=nome.split()[0]
print('Primeiro nome: ', primeiro)
ultimo=nome.split()[len(nome.split())-1]
print('Último nome: ', ultimo)