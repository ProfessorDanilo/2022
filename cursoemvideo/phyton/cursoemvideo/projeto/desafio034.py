salario=float(input('Digite seu salário:\tR$ '))
if salario>1250:
    print('Você receberá um aumento de R$ {:.2f}.'.format(0.1*salario))
else:
    print('Você receberá um aumento de R$ {:.2f}.'.format(0.15*salario))