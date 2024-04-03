package main

import (
    "fmt"
    "estructuraDatos/tp02/ej08/busquedaBinaria"
)

func main() {
    fmt.Printf("%d",busquedabinaria.Iterativa([]int{1,2,3,4,5,6,7}, 5))
    fmt.Printf("%d",busquedabinaria.Recursiva([]int{1,2,3,4,5,6,7}, 5, 0, 7, 0))
}
