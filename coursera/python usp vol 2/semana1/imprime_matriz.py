def imprime_matriz(m):
    for i in range(len(m)):
        for j in range(len(m[0])):
            if j==len(m[0])-1:
                print(m[i][j], end="\n")
            else:
                print(m[i][j], "", end="")
            
