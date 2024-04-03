package main

import (
    "fmt"
    "estructuraDatos/tp02/ej05/mayuscula"
)

func main() {
    mayusPos := mayuscula.Recursiva("holaquersll", 0)
    if mayusPos != -1 {
        fmt.Printf("Pos: %d\n", mayusPos)
    } else {
        fmt.Printf("No ta\n")
    }

    mayusPos = mayuscula.Iterativa("hoLaqueTsal")
    if mayusPos != -1 {
        fmt.Printf("Pos: %d\n", mayusPos)
    } else {
        fmt.Printf("No ta\n")
    }
}
