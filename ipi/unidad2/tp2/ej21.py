cadena = input('¿Cual es tu libro favorito?: ')
primeraLetra = True
nuevaCadena = ''

minCadena = cadena.lower()

for i in minCadena:
    if primeraLetra:
        nuevaCadena += i.upper()
        primeraLetra = False
    else:
        nuevaCadena += i

print(nuevaCadena)
