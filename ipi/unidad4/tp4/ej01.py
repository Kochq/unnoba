lista = [4, "palabra", [0,1], 9.6, False]

if 9.6 in lista:
    print("9.6 esta en la lista")
if 0 in lista:
    print("0 esta en la lista")
if False in lista:
    print("False esta en la lista")
if [0,1] in lista:
    indice = lista.index([0,1])
    print(f"[0,1] esta en el indice {indice} de la lista")
if 4.0 in lista:
    print("4.0 esta en la lista")
if "p" in lista:
    print("'p' esta en la lista")

