cantNum = int(input('¿Que cantidad de numeros desea ingresar?: '))
suma = 0
pares = 0
impares = 0

for i in range(cantNum):
    nuevoNum = int(input('Ingrese el numero: '))
    if nuevoNum >= 0:
        suma += nuevoNum
        if nuevoNum % 2:
            impares += 1
        else:
            pares += 1

print(f'La suma total es {suma}')
print(f'Hay {pares} numeros pares')
print(f'Hay {impares} numeros impares')
