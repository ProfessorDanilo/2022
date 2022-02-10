velocidade=float(input('Digite o valor da velocidade quando notificado:\n'))
if velocidade<=80:
    print('Você não foi multado(a)')
else:
    multa=(velocidade-80)*7
    print('Você foi multado(a) em R$ {:.2f}'.format(multa))