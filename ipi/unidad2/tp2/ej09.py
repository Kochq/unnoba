cantNum = int(input('¿Que cantidad de numeros desea ingresar?: '))
suma = 0

for i in range(cantNum):
    nuevoNum = int(input('Ingrese el numero: '))
    if nuevoNum >= 0:
        suma += nuevoNum
print(suma)
