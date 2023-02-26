rCorrectas = int(input("Ingresa el numero de respuestas correctas: "))
rIncorrectas = int(input("Ingresa el numero de respuestas incorrectas: "))
rBlanco = int(input("Ingresa el numero de respuestas en blanco: "))

total = rCorrectas * 4 - rIncorrectas

print("El puntaje total es de", total)
