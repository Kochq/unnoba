nAlum = 1
aprobados = 0
desaprobados = 0

while nAlum != 0:
    nAlum = int(input('Ingrese el numero de alumno: '))
    nota = int(input('Ingrese la nota: '))
    if nota > 4:
        aprobados+=1
    else:
        desaprobados+=1

print(f'Aprobados: {aprobados}')
print(f'Desaprobados: {desaprobados}')

