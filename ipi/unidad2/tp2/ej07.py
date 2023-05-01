numero = int(input('Ingrese el numero: '))

i = numero
if numero % 2:
    while i != numero*2:
        i+=1
        print(i)
else:
    while i != numero*2:
        i+=2
        print(i)
