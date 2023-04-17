montoVenta = 1
total = 0

while montoVenta != 0:
    montoVenta = int(input('Ingrese el monto de la venta: '))
    while montoVenta < 0:
        print('Ha ingresado un monto negativo, vuelva a intentarlo')
        montoVenta = int(input('Ingrese el monto de la venta: '))
    total += montoVenta

print(f'El monto total es de: {total}')
