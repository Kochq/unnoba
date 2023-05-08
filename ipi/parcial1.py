#Problema 1#####################################################

vocales = 'aeo'
vocalesEncontradas = 0
letras = 0

cadena = input("ingresa la cadena: ")

largoCadena = len(cadena)

while largoCadena < 3:
    print('mal')
    cadena = input('Vuelve a ingresar la cadena: ')
    largoCadena = len(cadena)

for i in cadena:
    if i != ' ':
        if i in vocales:
            vocalesEncontradas+=1
        letras+=1

porcentaje=(vocalesEncontradas/letras)*100

print(f'El % de vocales es de: {porcentaje}%')

#Problema 2#####################################################

total = 0
cant = 0
n = 0

cant = int(input('Ingresa la cantidad: '))

for i in range(cant):
    n = int(input('numero: '))
    total = (total + n**2)

print('Resultado: ', total)
