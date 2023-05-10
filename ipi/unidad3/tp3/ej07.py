from funciones import *

n1 = int(input('Ingrese un numero: '))
n2 = int(input('Ingrese un numero: '))
n3 = int(input('Ingrese un numero: '))
n4 = int(input('Ingrese un numero: '))
n5 = int(input('Ingrese un numero: '))

maxActual = maximo(n1, n2)
maxActual = maximo(maxActual, n3)
maxActual = maximo(maxActual, n4)
maxActual = maximo(maxActual, n5)

print(f'El numero mas grande es {maxActual}')

