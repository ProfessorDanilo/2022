def soma_matrizes(m1,m2):           # recebe as matrizes
    #soma=[]     #define a matriz que irá receber a soma dos valores
    if len(m1)==len(m2) and len(m1[0])==len(m2[0]):     #verifica as dimensões das matrizes

        soma=[0]*len(m1[0])
        if len(m1)>1:
            for k in range(len(m1)-1):
                soma_aux=[0]*len(m1[0])                                     #nota: se usar soma=[soma]*len(m1) da erra do pois aponta-se p/ mesmo lugar na memória
                soma=[soma]+[soma_aux]                                 #nestas linhas definimos uma lista de zeros

        #print(soma)
        i=0
        j=0
        
        for i in range(len(m1)):                         #varre as linhas para somar
            for j in range(len(m1[0])):             #varre as colunas para somar a matriz
                soma[i][j]=int(soma[i][j])
                soma[i][j]=m1[i][j]+m2[i][j]
                #print(soma)



        print(soma)

    else:
        falso = 0
        
        print(bool(falso))


    
