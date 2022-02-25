def menor_nome(nomes):
	#removendo espaços
	for i in range(len(nomes)):
		nomes[i]=nomes[i].strip().title()
	tamanho=len(nomes[0])
	menor=nomes[0]
	for i in range(len(nomes)):
		if(len(nomes[i])<tamanho):
			tamanho=len(nomes[i])
			menor=nomes[i]
	return(menor)
	
