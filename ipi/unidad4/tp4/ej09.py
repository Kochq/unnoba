def borrar_adyacentes(lista):
    newArray = []

    for i in lista:
        ultimo = len(newArray)

        if ultimo == 0:
            newArray.append(i)

        if newArray[ultimo-1] != i:
            newArray.append(i)

    return newArray

print(borrar_adyacentes(['a', 'a', '*', 'b', '=', '=', 'c', 'a']))
