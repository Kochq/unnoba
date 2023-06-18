nombre = input('Ingresa un nombre: ')
nombres = []
nombresMayus = []

while nombre != '':
    nombres.append(nombre)
    nombre = input('Ingresa un nombre: ')

for i in nombres:
    nombresMayus.append((i.upper()))
