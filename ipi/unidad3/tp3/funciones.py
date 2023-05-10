#1)
def es_par(numero):
    if numero % 2: return False
    else: return True

#4)
def suma_digitos(numero):
    suma = 0
    while numero > 1:
        digito = numero % 10
        numero /= 10
        suma += digito // 1
    return suma

#5) Ni idea cual es la diferencia, es lo mismo pero imprime la suma ¯\_(ツ)_/¯
def mostrar_suma_digitos(numero):
    suma = 0
    while numero > 1:
        digito = numero % 10
        numero /= 10
        suma += digito // 1
    print(suma)

#6)
def maximo(num_1, num_2):
    if num_1 > num_2: return num_1
    else: return num_2
