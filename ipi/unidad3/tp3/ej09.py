from funciones import *

nombreCompleto = ''
dni = ''

while nombreCompleto.find('Juan') == -1 or nombreCompleto.find('Maria') == -1:
    nombreCompleto = usuario(input('Ingrese su nombre completo: '))
    dni = contrasenia_por_defecto(input('Ingrese su numero de documento: '))

    print(f'Tus usuario sera: {nombreCompleto} y tu contraseña: {dni}')
