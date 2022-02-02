from numpy import loadtxt
from pylab import plot, xlabel, ylabel, show
r=5 #media movel
#numero de manchas solares a cada mes desde 1749
data = loadtxt("sunspots.txt", float)
escolha=input("Digite o item a/b/c:")
if escolha=="a":
    x=data[:,0]
    y=data[:,1]
    plot(x, y)
    show()
if escolha=="b":
    x=data[0:1000,0]
    y=data[0:1000,1]
    plot(x, y)
    show()
media=[]
x2=[]
if escolha=="c":
    x=data[:,0]
    y=data[:,1]
    plot(x, y, "g")
    for i in range(0,len(x)-r):
        if i>=r:
            soma=0
            for j in range(i-r,i+r):
                soma=soma+y[j]
            x2.append(x[i])
            media.append(soma/(2*r+1))
    plot(x2, media, "r")
    show()

else:
    print("Opcao invalida: execute o programa novamente.")
