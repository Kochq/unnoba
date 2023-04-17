vocales = ['a','e','i','o','u']
vocal = []

cadena = input('Ingresa una cadena de texto: ')

for i in cadena:
    if i.lower() in vocales:
        if i.lower() not in vocal:
            vocal.append(i.lower())

print(vocal)
