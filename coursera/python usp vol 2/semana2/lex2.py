def primeiro_lex(lista):
	menor = 127
	resposta=""
	for i in range(len(lista)):
		if(ord(lista[i][0])<menor):
			menor=ord(lista[i][0])
				
	for i in range(len(lista)):
		if(ord(lista[i][0])==menor):
				resposta=lista[i]
	
	return resposta
