package sumaenteros

func Recursiva(a int, b int) int {
    if a > b {
        return 0
    }

    return a + Recursiva(a+1, b)
}

func Iterativa(a int, b int) int {
    suma := 0
    for i := a; i <= b; i++ {
        suma += i
    }

    return suma
}
