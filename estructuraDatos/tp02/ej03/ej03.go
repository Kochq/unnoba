package main

import (
    "fmt"
    "estructuraDatos/tp02/ej03/factorial"
)

func main() {
    fmt.Printf("Recursiva: %d", factorial.Recursiva(5))
    fmt.Printf("\n")
    fmt.Printf("Iterativa: %d", factorial.Iterativa(5))
}
