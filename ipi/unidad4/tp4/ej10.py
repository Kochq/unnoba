def ocurrencias(lista):
    newArray = []

    for i in lista:
        ocurrencia = 1 # Lo inicio en 1 porque si no la resolucion del ejercicio no es igual, si la z no tiene otra z adyacente el resultado deberia ser [z,0]
        adyacente= lista.index(i)+1
        limite = len(lista)-1

        for a in lista[adyacente:limite]: # Recorro la lista solo en los valores que me interesan
            if a != i:
                break
            else:
                ocurrencia += 1

        newArray.append([i,ocurrencia])
        lista.pop(0) #Elimino el elemento que acabo de comprobar para no tener repetidos

    return newArray
