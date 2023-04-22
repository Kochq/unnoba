n = int(input('Ingrese un numero mayor a 1: '))
contador = 0

for i in range(2, n):
    if n % i == 0:
        contador += 1

if contador == 0:
    print(f'El numero {n} es primo')
else:
    print(f'El numero {n} no es primo')
