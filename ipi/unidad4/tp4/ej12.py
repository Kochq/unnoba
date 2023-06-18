def indice_mayor(lista):
    mayor = lista[0]
    for i in lista:
        if i > mayor:
            mayor = i
    return lista.index(mayor)

print(indice_mayor([6,1,7,19,2]))
