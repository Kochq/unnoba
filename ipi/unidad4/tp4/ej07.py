def dos_minimos(lista):
    if len(lista) < 1:
        return None,None

    primerMenor = lista[0]
    for i in lista:
        if i < primerMenor:
            primerMenor = i

    indice = lista.index(primerMenor)
    lista.pop(indice)

    if len(lista) < 1:
        return primerMenor,None

    segundoMenor = lista[0]
    for i in lista:
        if i < segundoMenor:
            segundoMenor = i

    return primerMenor, segundoMenor


print(dos_minimos([4]))
