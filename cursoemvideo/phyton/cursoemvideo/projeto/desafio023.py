##############################################
### exibindo unidade, dezena, centena e milhar
##############################################

#Recebendo dados:
numero=input('Digite um número de 0 a 9999: ')

##############################################
##  Resolvendo matematicamente
##############################################

num=int(numero)
milhar=num//1000
num=num-1000*milhar
centena=num//100
num=num-100*centena
dezena=num//10
num=num-10*dezena
print('unidade: ',num)
print('dezena: ',dezena)
print('centena: ', centena)
print('milhar: ',milhar)

##############################################
## Resolvendo com strings
##############################################

print('\nRESPONDENDO NOVAMENTE AGORA USANDO STRINGS\n')
if len(numero)==1:
    numero='000'+numero

if len(numero)==2:
    numero='00'+numero

if len(numero)==3:
    numero='0'+numero

print('unidade: ', numero[3])
print('dezena: ', numero[2])
print('centena:', numero[1])
print('milhar: ',numero[0])