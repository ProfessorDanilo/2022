#Cálculo simples de raiz
#Livro:Cálculo Numérico aspéctos teóricos e computacionais
#Aluno: Danilo
#Data da resolução: 03/05/2020
#versão: 1.0
#defina o intervalo [a, b] no qual se quer calcular a raiz
a=0.0
b=1.0
#defina a precisão da respostas
e=0.001
print("f(x)=x^3-9x+3          I[{:,.3f}, {:,.3f}]          e={:,.10f}\n".format(a,b,e))
#definindo a função
def f(x):
	func=x**3-9*x+3
	return func
#Verificando se há raíz no intervalo [a, b]
print('|Interação |   x                |  f(x)                   |  b - a            |' )
print('|__________|____________________|_________________________|___________________|')
print('|          |                    |                         |                   |')
if f(a)*f(b)>0:
	print("A função não possui raiz no intervalo dado")
	#Se o intervalo for menor que o erro
elif (b-a)<e:
        x=(a+b)/2
        print("Uma estimativa para a raiz é ",x)
else:
        k=1
        while(b-a)>e:
                M=f(a)
                x=(a+b)/2
                #atualizando o intervalo
                if M*f(x)>0:
                        a=x
                else:
                        b=x
                print('|{:^10}|{:<20}|{:<25}|{:<19}|' .format(k, x, f(x), b-a))
                k+=1
        print('|__________|____________________|_________________________|___________________|')
        print("\nUma estimativa para a raiz é ", (b+a)/2, " em ",k-1," interações!")
