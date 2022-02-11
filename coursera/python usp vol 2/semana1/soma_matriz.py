def soma_matrizes(m1,m2):
    if len(m1)!=len(m2) or len(m1[0])!=len(m2[0]):
        return False
    else:
        if len(m1[0])==1:
            soma=[[0]]
            if len(m1)>1:
                for i in range(len(m1)-1):
                    soma.insert(i+1,[0])
                    #print(soma)
        else:
            soma=[]
            for i in range(len(m1)):
                temporario=[0]
                for j in range(len(m1[0])-1):
                    temporario.insert(j+1,0)
                    #print("temporario",temporario)
                soma.insert(i+1,temporario)
                #print("soma",soma)



    for i in range(len(m1)):                         #varre as linhas para somar
            for j in range(len(m1[0])):             #varre as colunas para somar a matriz
                soma[i][j]=int(soma[i][j])
                soma[i][j]=m1[i][j]+m2[i][j]


    return soma
