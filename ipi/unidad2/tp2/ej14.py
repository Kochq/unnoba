n = 0
pares = 0
impares = 0
cincos = 0

while n!=-1:
    n = int(input('Ingrese un numero entrero positivo: '))
    if n < 0:
        exit()
    for i in str(n):
        if int(i) % 2:
            impares += 1
            if int(i) == 5:
                cincos += 1
        else:
            pares += 1

    print(f'Numeros pares: {pares}')
    print(f'Numeros impares: {impares}')
    print(f'Veces que aparecio el 5: {cincos}')
    pares = 0
    impares = 0
    cincos = 0

