#conversão decimais em binários
N = int(input("digite um número decimal: "))
k=0
Nk=N
i=1
j=0
a=(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0)
while (i==1):
    Qk=2*int(Nk/2)
    if Qk==Nk:
        a[j]=0
        Nk=Nk/2
    else:
        a[j]=1
        Nk=(Nk-1)/2
    j=j+1
    if Qk==0:
        i=2
