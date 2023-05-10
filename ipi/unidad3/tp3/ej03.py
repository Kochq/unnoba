from funciones import *

pares = 0
paresPositivos = 0

while pares != 8:
    numero = int(input('Ingrese un numero entero: '))
    par = es_par(numero)

    if par:
        pares+=1
        if numero > 0: paresPositivos+=1

if paresPositivos == pares: print('Todos los pares fueron positivos :D')
else: print('No todos los pares fueron positivos D:')
