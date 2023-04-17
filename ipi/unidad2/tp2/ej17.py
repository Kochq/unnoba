cadena = input('Ingrese una cadena de texto por favor te lo pido flaco: ')
palabraMasLarga = ''
lol = 0

palabras = cadena.split(" ")
cantPalabras = len(palabras)

print(f'La cadena que ingresaste tiene un total de {cantPalabras} palabras')

for i in palabras:
    letras = len(i)
    print(f'{i} tiene {letras} letras')
    if letras > lol:
        palabraMasLarga = i
    lol = letras

print(f'La palabra mas larga es: {palabraMasLarga}')
