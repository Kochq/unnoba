def digitos_repetidos(n):
    numero = str(n)
    newArray = []
    repetidos = []

    for i in numero:
        if i not in newArray:
            newArray.append(i) #El int() es solo para que el array sea de numeros, medio al pedo
        else:
            if int(i) not in repetidos:
                repetidos.append(int(i)) 
    
    return repetidos