def digitos(numero):
    newArray = []
    for i in numero:
        num = int(i)
        newArray.append(num)
    return newArray


print(digitos("1235"))
