def ehPrimo(x):
    if x >= 2:
        for y in range( 2, x ):
            if not ( x % y ):
                return False
    else:
        return False

    return True

def n_primos(n):
    total_primos=0
    if n==2:
        total_primos=1
    else:
        total_primos=1
        i=0
        lista=[]
        for i in range(3,n+1):
            validacao=ehPrimo(i)
            if validacao:
                total_primos=total_primos+1
    return total_primos                
