from vpython import sphere, vector
L = 5
R = 0.2
for i in range(-L,L+1):
    for j in range(-L,L+1):
        for k in range(-L,L+1):
            if (i+j+k)%2==0:
                sphere(pos=vector(i,j,k),radius=R)
            if (i+j+k)%2==1:
                sphere(pos=vector(i,j,k),radius=2*R)
