n1=int(input('Digite o primeiro número:\t'))
n2=int(input('Digite o segundo número:\t'))
n3=int(input('Digite o terceiro número:\t'))
### Ordenar
if n1>=n2:
    maior=n1
else:
    maior=n2

if maior<n3:
    maior=n3

if n1<=n2:
    menor=n1
else:
    menor =n2

if menor>n3:
    menor=n3

print('O menor número é {} e o maior é {}.'.format(menor, maior))