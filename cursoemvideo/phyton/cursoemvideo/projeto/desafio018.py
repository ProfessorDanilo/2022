from math import hypot, atan, pi

co=float(input('Digite o valor do cateto oposto: '))
ca=float(input('Digite o valor do cateto adjacente: '))
hip=hypot(co, ca)
print('A tangente é {}'.format(co/ca))
print('O seno vale {}' .format(co/hip))
print('O co-sseno vale {}' .format(ca/hip))

angulo=atan(co/ca)
print('VAMOS CALCULAR TAMBÉM O ÂNGULO\n\nO ângulo de em radianos: {}' .format(angulo))
grau=angulo*180//pi
minuto=(angulo*180/pi-grau)*60//1
segundo=((angulo*180/pi-grau)*60-minuto)*60

print('O ângulo em graus: {:.0f}°{:.0f}\'{:.0f}\'\''.format(grau, minuto, segundo))