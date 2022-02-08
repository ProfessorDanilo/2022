def maior_primo(n):
    i=2
    primo=n
    while i<=n/2:
        aux=n%i
        i=i+1
        if aux==0:
            n=n-1
            i=2
    return n    
            
            
            
        
