dia = input('¿Que dia es hoy?: ')
articulos = int(input('¿Cuantos articulos ha comprado?: '))

if dia.lower() == 'lunes' and articulos > 3:
    print('accede al descuento')
