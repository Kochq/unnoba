contador = 0
primos = 0
n = 1

while n != 0:
    n = int(input('Ingrese un numero mayor a 1: '))
    for i in range(2, n):
        if n % i == 0:
            contador += 1
    if contador == 0:
        primos += 1
    contador = 0

print(f'La cantidad de numeros primos fue de {primos}')



