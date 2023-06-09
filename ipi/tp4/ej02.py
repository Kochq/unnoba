lista = [5, 6, [9, 5], 2, 5]

cincos = 0;

for i in lista:
    if i == 5:
        cincos+=1
    elif type(i) == list:
        for a in i:
            if a == 5:
                cincos+=1
print(f"Hay {cincos} cincos")
