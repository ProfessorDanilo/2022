def cria_matriz(num_linhas, num_colunas, valor=0):
    '''cria e retorna uma matriz com num_linhas linhas e num_colunas colunas em que cada elemento é igual ao valor dado'''
    matriz=[]   #lista vazia
    for i in range(num_linhas):
        #cria a linha i
        linha=[]   #linhas vaizias
        for i in range(num_colunas):
            linha.append(valor)
        
        # adiciona linha à matriz
        matriz.append(linha)
    return matriz


def soma_matrizes(A, B):
    num_linhas=len(A)
    num_colunas=len(A[0])
    C=cria_matriz(num_linhas, num_colunas)

    for lin in range(num_linhas):
        for col in range(num_colunas):
            C[lin][col] = A[lin][col] + B[lin][col]

    return C

def produto(A, B): #minha tentativa de criar produto de matrizes
    num_linhas=len(A)
    num_colunas=len(A[0])
    assert num_linhas==num_colunas
    C = cria_matriz(num_linhas, num_colunas)    
    for k in range(num_linhas):
        for i in range(num_linhas):
            for j in range(num_colunas):
                C[i][j] += A[i][k] * B[k][j]
    return C


def mat_mul(A, B): #resolução na aula
    num_linhas_A, num_colunas_A = len(A), len(A[0])
    num_linhas_B, num_colunas_B = len(B), len(B[0])
    assert num_linhas_A == num_colunas_B

    C = []
    for linha in range(num_linhas_A):
        C.append([])
        for coluna in range(num_colunas_B):
            C[linha].append(0)
            for k in range(num_colunas_A):
                C[linha][coluna] += A[linha][k] * B[k][coluna]
    return C


if __name__ == "__main__":
    A = [[1,2,3],[4,5,6],[7,8,9]]
    B = [[10,20,30],[40,50,60],[70,80,90]]
    print(soma_matrizes(A, B))
    A2 = [[1,2,3],[4,5,6]]
    B2 = [[1,2],[3,4],[5,6]]
    print(mat_mul(A2,B2))


