from random import randint
n1=randint(1,60)
n2=randint(1,60)
n3=randint(1,60)
n4=randint(1,60)
n5=randint(1,60)
n6=randint(1,60)
while n1==n2 or n2==n3 or n3==n4 or n4==n5 or n5==n6:
    if n1==n2:
        n2 = randint(1,60)
    if n2==n3:
        n3 = randint(1,60)
    if n3 == n4:
        n4 = randint(1,60)
    if n4==n5:
        n5 = randint(1,60)
    if n5==n6:
        n6 = randint(1,60)


print('Seus números são:')
print('{}\t{}\t{}\t{}\t{}\t{}'.format(n1,n2,n3,n4,n5,n6))

i=0
s1=0
s2=0
s3=0
s4=0
s5=0
s6=0
while s1!=n1 or s1!=n2 or s1!=n3 or s1!=n4 or s1!=n5 or s1!=n6 or s2!=n1 or s2!=n2 or s2!=n3 or s2!=n4 or s2!=n5 or s2!=n6 or s3!=n1 or s3!=n2 or s3!=n3 or s3!=n4 or s3!=n5 or s3!=n6 or s4!=n1 or s4!=n2 or s4!=n3 or s4!=n4 or s4!=n5 or s4!=n6 or s5!=n1 or s5!=n2 or s5!=n3 or s5!=n4 or s5!=n5 or s5!=n6 or s6!=n1 or s6!=n2 or s6!=n3 or s6!=n4 or s6!=n5 or s6!=n6:
    i=i+1
    s1 = randint(1, 60)
    s2 = randint(1, 60)
    s3 = randint(1, 60)
    s4 = randint(1, 60)
    s5 = randint(1, 60)
    s6 = randint(1, 60)
    while s1 == s2 or s2 == s3 or s3 == s4 or s4 == s5 or s5 == s6:
        if s1 == s2:
            s2 = randint(1, 60)
        if s2 == s3:
            s3 = randint(1, 60)
        if s3 == s4:
            s4 = randint(1, 60)
        if s4 == s5:
            s5 = randint(1, 60)
        if s5 == s6:
            s6 = randint(1, 60)

print('O total de jogadas simuladas foram {}.'.format(i))