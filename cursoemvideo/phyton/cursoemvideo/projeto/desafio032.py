ano=int(input('Digite um ano:'))
bissexto=False
if ano%400==0:
    bissexto=True
else:
    if ano%100==0:
        bissexto=False
    else:
        if ano%4==0:
            bissexto=True

print('É bissexto.' if bissexto else 'Não é bissexto.')