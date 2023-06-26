palabras = 0
cadena = input("Ingresa una cadena: ")

palabras = cadena.split()

print(f'Hay {len(palabras)} palabras')

def repetidas(palabra):
    newArray = []
    repetidas = []

    for i in palabra:
        if i.lower() not in newArray:
            newArray.append(i.lower())
        else:
            repetidas.append(i.lower())

    return repetidas

for p in palabras:
    letrasRepetidas = repetidas(p)
    if letrasRepetidas == []:
        print(f'En la palabra {p} no se repiten letras')
    else:
        letrasRep = ""
        for i in letrasRepetidas:
            letrasRep += i+' '
        print(f'En la palabra {p} se repiten {letrasRep}')

