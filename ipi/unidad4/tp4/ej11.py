def suma_digitos(numero):
    suma = 0
    while numero > 1:
        digito = numero % 10
        numero /= 10
        suma += digito // 1
    return suma

def sumatoria_digitos(lista):
    newArray = []

    for i in lista:
        newArray.append(suma_digitos(i))

    return newArray

print(sumatoria_digitos([154, 27890, 111, 43]))
