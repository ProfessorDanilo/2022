controle=True
lista=[]
lista_invertida=[]
while controle:
    n=int(input('Digite um número: '))
    if n==0:
        controle=False
        print()
    else:
        lista.append(n)
j=len(lista)
for i in range(0,j):
    lista_invertida.append(lista[j-i-1])
for i in lista_invertida:
    print(i)
    
