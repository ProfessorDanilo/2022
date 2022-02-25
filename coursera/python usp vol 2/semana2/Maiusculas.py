from time import sleep
def maiusculas(frase):
        resposta=""
        for i in range(len(frase)):
                for j in range(65,91):
                        if(ord(frase[i])==j):
                                resposta=resposta+frase[i]
        return(resposta)


