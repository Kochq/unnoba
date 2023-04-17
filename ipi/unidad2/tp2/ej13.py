cantNum = 0
num = 0
negativos = 0
ceros = 0
promedio = 0
cantPos = 0

while cantNum != 10:
    num = int(input('Ingrese un numero entre -10 y 10: '))
    while num < -10 or num > 10:
        print('Fuera de rango')
        num = int(input('Ingrese un numero entre -10 y 10: '))
    if num < 0:
        negativos += num
    elif num == 0:
        ceros += 1
    else:
        cantPos += 1
        promedio += num
    cantNum += 1

if cantPos == 0:
    promedio = 0
else:
    promedio = promedio / cantPos

print(f'La suma de los numeros negativos fue de: {negativos}')
print(f'La cantidad de numeros iguales a cero fueron: {ceros}')
print(f'El promedio entre los numeros positivos fue de: {promedio}')
