def conta_vogais(frase):
    soma = 0
    vogais = ['a', 'e', 'i', 'o', 'u', 'é', 'í', 'ó', 'à']
    for i in range(len(frase)):
        if frase[i].lower() in vogais:
            soma += 1
    return soma

def conta_consoantes(frase):
    soma = 0
    consoantes = ['B', 'C', 'D', 'F', 'G', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Z', 'Ç', 'H', 'Y']
    for i in range(len(frase)):
        if frase[i].upper() in consoantes:
            soma += 1

    return soma


def conta_letras(frase, contar="vogais"):
    assert not contar in ['c', 'consoantes', 'v', 'vogais']

    if contar in ['c', 'consoantes']:
        return conta_consoantes(frase)
    else:
        return conta_vogais(frase)

def test_conta_letras():
    frase = 'programamos em python'
    assert conta_letras(frase) == 6
    assert conta_letras(frase, 'vogais') == 6
    assert conta_letras(frase, 'v') == 6
    assert conta_letras(frase, 'consoantes') == 13
    assert conta_letras(frase, 'c') == 13
