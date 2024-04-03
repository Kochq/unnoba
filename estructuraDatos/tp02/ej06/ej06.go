package main

import (
    "fmt"
    "estructuraDatos/tp02/ej06/mayorElemento"
)

func main() {
    arreglo := []int{1,23,8,32,12,3}

    fmt.Printf("%d\n", mayorelemento.Recursiva(arreglo, arreglo[0], 0))
    fmt.Printf("%d\n", mayorelemento.Iterativa(arreglo))
}
