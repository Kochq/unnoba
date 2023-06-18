nombre = input('Ingresa un nombre: ')
nombres = []

while nombre != '':
    nombres.append(nombre)
    nombre = input('Ingresa un nombre: ')

for i in nombres:
    print(i)
