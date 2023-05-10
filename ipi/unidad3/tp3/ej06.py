from funciones import *

suma = 10
impares = 0

while suma >= 10 and suma <= 50:
    numero = int(input('Ingrese un numero entero: '))
    par = es_par(numero)

    if par == False: impares+=1

    suma = suma_digitos(numero)

print(f'La cantidad de numeros impares fue de {impares}')
