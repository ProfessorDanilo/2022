def primeiro_lex(lista):
	menor = 127
	resposta=""
	for i in range(len(lista)):
		for j in range(len(lista[i])):
			if(ord(lista[i][j])<menor):
				menor=ord(lista[i][j])
				
	for i in range(len(lista)):
		for j in range(len(lista[i])):
			if(ord(lista[i][j])==menor):
				resposta=resposta+lista[i][j]
	
	return resposta
