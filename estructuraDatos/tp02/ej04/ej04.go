package main

import (
    "fmt"
    "estructuraDatos/tp02/ej04/vocalesConsonantes"
)

func main() {
    vocalesR, consonantesR := vocalesConsonantes.Recursiva("HOlaQuetAlhehe", 0, 0, 0)
    fmt.Printf("Vocales: %d Consonantes: %d", vocalesR, consonantesR)
    fmt.Printf("\n")
    vocalesI, consonantesI := vocalesConsonantes.Iterativa("HOlaQuetAlhehe")
    fmt.Printf("Vocales: %d Consonantes: %d", vocalesI, consonantesI)
}
