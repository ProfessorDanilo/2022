from math import ceil
print('-'*43,'\n---    CALCULE QUANTA TINTA IRÁ USAR    ---')
print('-'*43)

largura=float(input('Digite a largura da sua parede: '))
altura=float(input('Digite a altura de sua parede: '))

tinta=largura*altura/2

print('Você irá precisar de {:.0f} litros de tinta.'.format(ceil(tinta)))