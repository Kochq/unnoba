package factorial

func Recursiva(num int) int {
    if(num == 0) {
        return 1
    }

    return num * Recursiva(num-1)
}

func Iterativa(num int) int {
    total := 1

    for i := num; i > 0; i-- {
        total *= i
    }

    return total
}
