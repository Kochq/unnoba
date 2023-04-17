# Fibonacci

fibo1 = 0
fibo2 = 1
suma = 0

for i in range(25):
    suma = fibo1 + fibo2
    fibo1 = fibo2
    fibo2 = suma
    print(suma)
