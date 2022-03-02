def pagamento(valor, carga_horaria):
    return valor*carga_horaria

def fib(n):
    a, b = 0 , 1
    while b < n:
        print(b, end=" ")
        a, b = b , a + b
    print()

def fib2(n):
    result = []
    a, b = 0 , 1
    while b < n:
        result.append(b)
        a, b = b, a + b
    return result

if __name__=="__main__":
    print("sendo executado como módulo principal")
    import sys
    fib(int(sys.argv[1]))
else:
    print("sendo importado por outro módulo")

