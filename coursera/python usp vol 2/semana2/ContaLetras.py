def conta_letras(frase, contar="vogais"):
	contagem=0	
	for i in range(len(frase)):
		if(frase[i].upper()=="A" or frase[i].upper()=="E" or frase[i].upper()=="I" or frase[i].upper()=="O" or frase[i].upper()=="U"):
			contagem=contagem+1
	if(contar=="vogais"):
		return contagem
	elif(contar=="consoantes"):
		return len(frase.replace(" ", ""))-contagem
	else:
		return "Parametro errado"
		
