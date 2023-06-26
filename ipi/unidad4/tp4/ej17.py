from ej16 import digitos_repetidos

def suma_digitos(n):
    suma = 0
    for i in n:
        suma += i
    return suma

numero = int(input('Ingresa un numero porfis uwu?: '))

while digitos_repetidos(numero) == []:
    numero = int(input('Ingresa un numero porfis uwu?: '))

lista = digitos_repetidos(numero)

#a)
print(lista)
#b)
print(f'Se repiten {len(lista)} digitos')
#c y d)
#Que paja
