package main

import (
    "fmt"
    "estructuraDatos/tp02/ej07/invertirArreglo"
)

func main() {
    arreglo := []int{1,2,3,4,5,6}
    invertirarreglo.Recursiva(arreglo, 0, len(arreglo)-1)
    fmt.Printf("%d", arreglo)
    invertirarreglo.Iterativa(arreglo)
    fmt.Printf("%d", arreglo)
}
