package main

import (
	"fmt"
    "estructuraDatos/tp04/ej01/stack"
)

func main() {
    var numero int
    stack := stack.Stack{}

    for i := 0; i<10; i++ {
        fmt.Printf("Numero %d:", i)
        fmt.Scan(&numero)
        stack.PushStack(numero)
    }

    for i := 0; i<10; i++ {
        fmt.Printf("Numero: %d\n", stack.PopStack())
    }

}
