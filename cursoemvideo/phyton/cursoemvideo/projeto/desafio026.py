frase=input('Digite uma frase:\n')

print('Essa frase possui {} letra(s) "a".'.format(frase.upper().count('A')))
temp=frase[frase.upper().find('A'):]
temp=temp.upper()
teste='A' in temp
while teste:
    temp=temp[temp.find('A')+1:]
    teste='A' in temp
    
if frase.upper().count('A')==-1:
    print('Parece que sua frase não possui a letra "a".')
else:
    print('A letra "a" aparece pela primeira vez na {}ª posição.'.format(frase.upper().find('A') + 1))
    print('O último "a" aparece na {}ª posição.'.format(len(frase)-len(temp)))





