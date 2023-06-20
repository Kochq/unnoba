numeros = {1,2,3,4,5,6,7,8,9,10}

numeros.add(11)
numeros.add(12)

for i in range(30,35):
    numeros.add(i)

numeros.add(232)
numeros.add(-264)

if 7 in numeros:
    print("El 7 esta en el conjunto")
else:
    print("El 7 no esta en el conjunto")

if 20 in numeros:
    print("El 20 esta en el conjunto")
else:
    print("El 20 no esta en el conjunto")

print(f"Hay {len(numeros)} elementos en el conjunto")
