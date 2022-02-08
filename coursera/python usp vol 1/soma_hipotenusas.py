def e_hipotenusa(hip):
	tem_hip=False
	for i in range(1,hip+1):
		for j in range(1,hip+1):
			if i**2+j**2==hip**2:
				tem_hip=True

	return tem_hip


def soma_hipotenusas(n):
	soma=0
	for i in range(0,n+1):
		if e_hipotenusa(i):
			soma=soma+i
	return soma
	input()
