numeros = []
n = int(input("Ingrese la cantidad de numeros: "))
i = 0

for i in range(n):
    numeros.append(int(input("ingrese un numero: ")))

def media(array):
    suma = 0
    for valor in array:
        suma += valor
    largo = len(array)
    return suma / largo

print("El maximo es:", max(numeros))
print("El minimo es:", min(numeros))
print("La media es:", media(numeros))
