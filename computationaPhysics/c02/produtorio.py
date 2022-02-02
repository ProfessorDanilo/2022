from numpy import loadtxt, zeros, array, copy #log em numpy é bom para array pois náo é preciso usar a função map
from math import log, exp
import time
#imprime um arranjo de zeros
a = zeros([2,2], int)
print(a)

#lê um aquivo txt 
values=loadtxt("values.txt", float)
print(values)


#calcula a média geométrica
start=time.time()
mean=1
for i in range(len(values)):
    mean=mean*values[i]
mean=mean**(1/len(values))
print(mean)
end=time.time()
print("tempo de execução:", end-start)

#com um pouco de matemática, podemos transformar a
#média geométrica numa média aritmética com log
#e a funçãp map calcula cada  log para cada valor
start=time.time()
logs=array(list(map(log, values)),float)
print(logs)
geometric = exp(sum(logs)/len(logs))
print(geometric)
end=time.time()
print("tempo de execução:", end-start)

#conclusão: com iteração é mais rápido, mas da erro se trabalharmos com npumeros grandtes
#com log é legal para números grandes, mas da problema quanto há zeros
#fazendo tratamento de erros podemos conseguir otimizar o programa para
#executar sem erro e o mais rápido possível...


#sobre cópia, note que se
b=array([1,1], int)
print("valor inicial de b: ")
print(b)
c=b
b[0]=2
#modificamos tanto b quanto c
print("tanto b quanto c são modificados:")
print("b = ", b)
print("c = ", c)
#o correto seria:
b=array([1,1], int)
c=copy(b)
b[0]=2
#modificamos tanto b quanto c
print("Agora somente mudamos b:")
print("b = ", b)
print("c = ", c)
