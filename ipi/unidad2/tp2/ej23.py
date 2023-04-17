frase = input('Ingrese una frase: ')
mayus = 0

for i in frase[:4]:
    if i.isupper():
        mayus += 1

if mayus >= 2:
    print(frase.upper())
else:
    print(frase)
