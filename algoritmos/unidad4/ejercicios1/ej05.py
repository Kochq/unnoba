def maximo(num1, num2):
    valor = num1 - num2
    if valor < 0:
        maximo = num2
    elif valor > 0:
        maximo = num1
    else:
        maximo = 1
    return maximo

maxnum = maximo(int(input("num1: ")), int(input("num2: ")))

print("El numero mas grande es: ",maxnum)
