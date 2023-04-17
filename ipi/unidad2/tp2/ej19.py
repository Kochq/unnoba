cadena = input('Ingrese una cadena: ')
caracter = input('Ingrese un caracter para filtrar: ')
nuevaCadena = ''

for i in cadena:
    if i != caracter:
        nuevaCadena += i
    else:
        nuevaCadena += '*'

print(nuevaCadena)
