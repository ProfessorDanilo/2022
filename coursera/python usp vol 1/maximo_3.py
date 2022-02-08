def maximo(n1,n2,n3):
    if n1>=n2 and n1>=n3:
        maximo = n1
    else:
        if n2>=n1 and n2>=n3:
            maximo = n2
        else:
            maximo = n3
    return maximo
