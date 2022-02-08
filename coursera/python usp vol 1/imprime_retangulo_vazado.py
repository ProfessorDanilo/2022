largura=int(input('Digite a largura:\t'))
altura=int(input('Digite a altura:\t'))
i=0
j=0
while i<altura:
    while j<largura:
        if i==0 or i==altura-1 or j==0 or j==largura-1:
            print('#',end='')
        else:
            print(' ',end='')
        j=j+1
    print()
    i=i+1
    j=0
