package cuentaRegresiva

import "fmt"

func Recursiva(num int) {
    if num > 0 {
        return
    }

    fmt.Printf("%d\n", num)

    Recursiva(num - 1)
}

func Iterativa(num int) {
    for i := num; i >= 0; i-- {
        fmt.Printf("%d\n", i)
    }
}
