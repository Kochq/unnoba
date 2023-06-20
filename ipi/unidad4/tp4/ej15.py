horm1 = set(['melanina', 'oxitocina', 'dopamina'])
horm2 = set(['testosterona', 'melanina'])
horm3 = set(['calcinotna', 'estradiol'])

#A)
if len(horm1 & horm2) > 0:
    print(f'La hormona 1 y 2 comparten {horm1 & horm2}')
else:
    print('no comparten ninguna hormona')

if len(horm1 & horm3) > 0:
    print(f'La hormona 1 y 3 comparten {horm1 & horm3}')
else:
    print('no comparten ninguna hormona')

#B)
if horm2.issubset(horm1):
    print("Si, es un subconjunto")
else:
    print("No, no es un subconjunto")

#C) No se si esto es lo que queria la consigna
hormonas = horm1 | horm2 | horm3

for i in hormonas:
    print(i)
