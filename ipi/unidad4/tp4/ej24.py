paises = [["Colonia", "Uruguay"], ["Granada", "España"], ["Inverness", "Escocia"], ["Salto", "Uruguay"], ["Piriapolis", "Uruguay"], ["Aberdeen", "Escocia"]]

cantidadCiudades = []

for i in paises:
    paisesDos = paises
    index = paisesDos.index(i)+1
    unaCiudad = i[0]
    unPais = i[1]
    ciudades = 1

    for a in paisesDos[index::]:
        if a[1] == unPais:
            paisesDos.pop(paisesDos.index(a))
            ciudades += 1

    cantidadCiudades.append([i[1], ciudades])

print(cantidadCiudades)
