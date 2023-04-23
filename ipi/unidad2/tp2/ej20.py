cantCaracteres = 0
palabra = ''
zetas = 0
c = '1'

while len(c) == 1 and c != '0':
    c = input('Ingrese un caracter: ')
    if c != '0' and len(c) == 1:
        palabra += c
        cantCaracteres += 1
        if c == 'z':
            zetas += 1

promedio = (zetas / cantCaracteres) * 100

print(f'Formaste la palabra: "{palabra}"')

print(f'Un {promedio}% de los caracteres fueron "z"')
