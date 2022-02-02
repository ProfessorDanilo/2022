import time
start0=time.time()
a1=15.8
a2=18.3
a3=0.714
a4=23.2

print("primeira parte: escolha os valores de A e de Z para determinar a energia esperada.")
A=float(input("Digite o numero de massa A do elemento: "))
Z=float(input("Digite o numero atômico Z do elemento: "))
if A%2==1:
    a5=0.0
elif Z%2==0:
    a5=12.0
else:
    a5=-12.0


def eng(A, Z):
    #B é energia em milhões de elétron volts
    B=a1*A-a2*A**(2/3)-a3*Z**2*A**(-1/3)-a4*(A-2*Z)**2/A+a5/A**0.5
    return B


print("energia = ", eng(A,Z), " MeV")
print("a) Energia esperada para A = ",A," e Z = ", Z," : ", eng(A,Z), " MeV")
print("b) Energia esperada por nucleon: ", eng(A,Z)/A, " MeV")
print("c) Energia esperada para Z = ", Z, " e A de ", Z, " até ", 3*Z, ".")
B_nucl_max=eng(Z,Z)
A_max=Z
i=int(Z)
for A_provis in range(i, 3*i+1):
    print("A = ", A_provis,", B = ", eng(A_provis,Z), " MeV", ", B / A = ", eng(A_provis,Z)/A_provis, " MeV")
    if B_nucl_max<eng(A_provis,Z)/A_provis:
        B_nucl_max=eng(A_provis,Z)/A_provis
        A_max=A_provis
print("A energia esperada para B/A máximo é de ", B_nucl_max*A_max, " MeV para Z = ", Z, " e A = ", A_max, ".")
print("Neste caso, a energia por nucleon é de ", B_nucl_max," MeV.")
print("d) Com Z indo de 1 até 100 e A de Z até 3*Z calculemos o número atômico para a maior energia por nucleon esperada:")
Eng_Nucl_Max=eng(1,1)
start=time.time()
for z in range(1,6001):
    for a in range(z, 3*z+1):
        if Eng_Nucl_Max<eng(a,z)/a:
            Eng_Nucl_Max=eng(a,z)/a
            A=a
            Z=z
end=time.time()
print("Z = ", Z, " e A = ", A, ".")
print("Isto corresponde ao Níquel.")
print("Tempo de execução do item d): ", end-start)
print("Tempo total de execução: ", end-start0)
