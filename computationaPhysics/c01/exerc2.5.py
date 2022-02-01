m=9.11e-31   		#massa do elétron em kg
hbar=1,0545718e-34 	#Constante de Plank

E=float(input('Digite o valor da energia no elétron em eletron-volts: '))
V=float(input('Digite o valor da barreira de potencial em eletron-volts: '))


k1=(2*m*E)**(0.5)   #energia cinética incidente multiplicada pela constante de planck
k2=(2*m*(E-V))**(0.5) #energia cinética transmitida multiplicada pela constante de planck

T=4*k1*k2/(k1+k2)**2			#probabilidade de transmissão
R=((k1-k2)/(k1+k2))**2			#probabilidade de reflexão

print('A probabilidade de transmissão é {:.3}\ne a probabilidade de reflexão é {:.3}.'.format(T,R))

