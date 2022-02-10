frase='Curso em Vídeo Python'
print(frase[9::3])
print(type(frase))
print(len(frase))
print(frase.count('o',2,13))
print(frase.find('deo'))
print(frase.find('Android'))
curso='Curso' in frase
print(curso)
Android='Android' in frase
print(Android)
print(frase.replace('Python', 'Android'))
Android='Android' in frase
print(Android)
print(frase.upper())
print(frase.lower())
print(frase.capitalize())
print(frase.title())
espacos='    Danilo     Jose    de  Lima     '
print(espacos)
print(espacos.strip())
print(espacos.rstrip())
print(espacos.lstrip())
print(espacos)
print(frase.split())
print(frase.split()[0:2])
print('_'.join(frase))
print('_'.join(frase.split()))
#quantos "O" tem no total
print(frase.upper().count('O'))
print(frase.lower().find('vídeo'))
print(frase[frase.lower().find('vídeo'):])
print(frase.split())
dividido=frase.split()
print(dividido[0])
print(dividido[0][2])
### USO DAS TRÊS ASPAS:
print("""These functions cannot be used with
 complex numbers; use the functions of the 
 same name from the cmath module if you require
  support for complex numbers. """)