abc = 'abcdefghijklmnñopqrstuvwxyz'

palabra = input('Ingrese la palabra a encriptar: ')
lugares = int(input('Ingrese la cantidad de lugares a mover las letras: '))

palabraL = palabra.lower()
newPalabra = ''

for l in palabraL:
    if l in abc:
        index = abc.index(l)
        newIndex = (index+lugares)%27
        newPalabra += abc[newIndex]

print(newPalabra)



