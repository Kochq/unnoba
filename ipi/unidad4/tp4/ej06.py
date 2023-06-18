def minimo_elemento(lista):
    if len(lista) < 1:
        return None

    menor = lista[0]
    for i in lista:
        if i < menor:
            menor = i
    return menor
