#Dados
#G=6.67x10^-11 m^3 kg^-1s^-2
#M=5.97x10^24 kg
#Calculando apenas a altura do satélite sendo dado o seu período


from math import sqrt, pi
T=float(input("Digite o período do planeta em horas: "))
T=T*3600

G=6.67e-11    #constante da gravitação universal no SI
M=5.97e24   #massa da terra em kg
R=6371000   #raio da terra em metros

h=(G*M*T**2/(4*pi**2))**(1/3)-R

print('A Altura do satélite é: {:.3} km' .format(h/1000))

T1=24*3600
T2=23.93*3600
Delta_h= (G*M*T1**2/(4*pi**2))**(1/3)-(G*M*T2**2/(4*pi**2))**(1/3)

print('''\n\n A diferênça de altura entre satélites com períodos de 24 horas
(dia terrestre) e 23.93 horas (dia sideral) é de {:.3} km'''.format(Delta_h)) 
