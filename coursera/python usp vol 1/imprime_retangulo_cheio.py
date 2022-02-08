largura=int(input('Digite a largura:\t'))
altura=int(input('Digite a altura:\t'))
i=0
j=0
while i<altura:
    while j<largura:
        print('#',end='')
        j=j+1
    print()
    i=i+1
    j=0
