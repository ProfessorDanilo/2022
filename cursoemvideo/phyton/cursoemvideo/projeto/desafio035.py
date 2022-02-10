c1=float(input('Digite o tamanho de uma reta:\t\t\t'))
c2=float(input('Digite o tamanho de uma segunda reta:\t'))
c3=float(input('Digite o tamanho da terceira reta:\t\t'))


if (c1+c2)>c3 and (c2+c3)>c1 and (c3+c1)>c2:
    print('É possível formar um triângulo com esses valores!')
else:
    print('Não é possível formar um triângulo!')