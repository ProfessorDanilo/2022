real=float(input('Quantos reais você possui? '))
dolar=100*real/327
print('Você pode comprar U$$ {:.2f}' .format(dolar))

####  outra forma de fazer é usar a buid function round(,)

print('-'*30,'Usando outra forma de arredondadeto... ')
casas=int(input('Digite com quantas casas decimais quer sua conversão: '))
print('Lá vai:\n\n   U$$ {}'.format(round(dolar, casas)))