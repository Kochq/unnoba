a = [ False, 1, 'dos', 3.0, 'ix', (5,), [3, 3], True ]

#A)
def primerUltimo(lista):
    primero = lista[0]
    ultElemento = len(lista) - 1
    ultimo = lista[ultElemento]
    return primero, ultimo

#B)
def eliminarUltimo(lista):
    ultElemento = len(lista) - 1
    lista.pop(ultElemento)

#C)
def eliminarTresUlt(lista):
    eliminarUltimo(lista)
    eliminarUltimo(lista)
    eliminarUltimo(lista)

#D)
def insertarNueve(lista):
    lista.insert(0,9)

#E)
def cambiarIx(lista):
    ixIndex = lista.index('ix')
    lista[ixIndex] = 4

#F)
def meterCinco(lista):
    lista.append(5)

#G) 
def rebanadasDeMierda(lista):
    print(lista[0:3])

#H)
def dobleLista(lista):
    lista += lista

#I)
def determinar(lista):
    if 'dos' in lista:
        print('"dos" esta en la lista')
    if 3.0 in lista:
        print('3.0 esta en la lista')

#J)
def unoCuatro(lista):
    cuatros = 0;
    unos = 0;

    for i in lista:
        if i == 1:      #Tambien toma el True
            unos+=1
        elif i == 4:
            cuatros+=1

    print(f"Hay {unos} unos y {cuatros} cuatros")

#K)
def iterar(lista):
    for i in lista:
        print(i)

#L)
def rareti(lista):
    lista.reverse()
    for i in lista:
        print(i)
