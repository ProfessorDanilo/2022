cidade=input('Digite o nome de uma cidade: ')
PrimeiroNome=cidade.split()[0]
PrimeiroNome=PrimeiroNome.upper()
if PrimeiroNome=='SANTO':
    print('Esta cidade começa com o nome "Santo".')
else:
    print('Esta cidade não começa com o nome "Santo".')