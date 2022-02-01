from math import atan, pi, cos
x=float(input('Digite o valor da coordenada x: '))
y=float(input('Digite o valor da coordenada y: '))
theta=atan(y/x)
r=x/cos(theta)
theta=theta*180/pi

print('O valor do ângulo em graus é: {:.3}'. format(theta))
print('O valor do raio é: {:.3}'.format(r))
