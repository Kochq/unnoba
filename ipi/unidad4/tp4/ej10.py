def ocurrencias(lista):
    newArray = []

    for i in lista:
        ocurrencia = 1 # Lo inicio en 1 porque si no la resolucion del ejercicio no es igual, pero creo que esta mal redactado, si la z no tiene otra z adyacente el resultado deberia ser [z,0]
        original = lista.index(i)
        limite = len(lista)-1

        for a in lista[original+1:limite]:
            if a != i:
                break
            else:
                ocurrencia += 1

        newArray.append([i,ocurrencia])
        lista.pop(0) #Elimino el elemento que acabo de comprobar para no tener repetidos

    return newArray

print(ocurrencias(['z', 7, True, True, 34, 'z', 'z', 'z', 3.14]))
