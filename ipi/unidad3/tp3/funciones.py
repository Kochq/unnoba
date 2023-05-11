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

#8)
def usuario(nombre):
    completo = nombre.replace(' ', '').replace(',', '')
    return completo

def contrasenia_por_defecto(dni):
    ultimos4 = dni[4::]
    return ultimos4

#10)
def titulo(cadena):
    nuevaCadena = ''
    if cadena.isalpha():
        palabras = cadena.split(' ')

        for p in palabras:
            nuevaP = p.replace(p[0], p[0].upper(), 1) #Reemplaza el primer caracter de la palabra por su mayuscula, una sola vez
            nuevaCadena+= nuevaP + ' '
    else:
        return 1 #Mal

    return nuevaCadena
