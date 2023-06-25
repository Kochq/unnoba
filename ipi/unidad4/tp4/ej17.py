from ej16 import digitos_repetidos

def suma_digitos(n):
    suma = 0
    for i in n:
        suma += i
    return suma

numero = int(input('Ingresa un numero porfis uwu?: '))

while digitos_repetidos(numero) == []:
    numero = int(input('Ingresa un numero porfis uwu?: '))

array = suma_digitos(digitos_repetidos(numero))

#a)
print(array)
#b)
print(f'Se repiten {len(array)} digitos')
#c y d)
#Que paja
