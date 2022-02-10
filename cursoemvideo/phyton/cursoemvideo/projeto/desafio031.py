distancia=float(input('Digite a distância de seu trajeto, em km:\t'))
if distancia<=200:
    print('Você vai pagar R$ {:.2f} nesta viagem.'.format(distancia/2))
else:
    print('Você vai pagar R$ {:.2f} nesta viagem.'.format(0.45*distancia))