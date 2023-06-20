lugares = [ ["Rosario","Santa Fe"], ["Carlos Paz","Córdoba"], ["Balcarce","Buenos Aires"], ["Cosquín","Córdoba"] ]
personas = [ ["Juan Perez",26782345,"Carlos Paz"], ["María Gomez",40173542,"Rosario"], ["Ana Ríos",9216378,"Cosquín"] ]

#A)
def obtenerCiudad(personas, DNI):
    ciudad = ""

    for persona in personas:
        if DNI in persona:
            ciudad = persona[2]

    return ciudad

#B)
def obtenerProvincia(personas, ciudades, DNI):
    provincia = ""
    ciudad = obtenerCiudad(personas, DNI)

    for c in ciudades:
        if ciudad in c:
            provincia = c[1]

    return provincia

print(obtenerProvincia(personas, lugares, 40173542))

#C) no entiendo que es lo que pide lol
