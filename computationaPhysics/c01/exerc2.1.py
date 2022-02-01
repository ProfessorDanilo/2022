#Dados
#G=6.67x10^-11 m^3 kg^-1s^-2
#M=5.97x10^24 kg
from math import sqrt
h=float(input("Digite o valor da altura, em metros: "))
print("A resistência do ar é desprezada... e consideramos g = 9.8 m/s^2")
t=sqrt(2*h/9.8)
print("O tempo de queda é {:.3} segundos" .format(t))
