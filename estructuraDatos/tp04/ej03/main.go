package main

import (
	"estructuraDatos/tp04/ej01/queue"
	"estructuraDatos/tp04/ej01/stack"
	"fmt"
)

func ordenInverso(stack *stack.Stack, numero *int) {
    for i := 0; i<10; i++ {
        fmt.Printf("Numero %d:", i)
        fmt.Scan(numero)
        stack.PushStack(*numero)
    }

    for i := 0; i<10; i++ {
        fmt.Printf("Numero: %d\n", stack.PopStack())
    }
}

func ordenNormal(queue *queue.Queue, numero *int) {
    for i := 0; i<10; i++ {
        fmt.Printf("Numero %d:", i)
        fmt.Scan(numero)
        queue.PushQueue(*numero)
    }

    for i := 0; i<10; i++ {
        fmt.Printf("Numero: %d\n", queue.PopQueue())
    }
}

func main() {
    var numero int
    stack := stack.Stack{}
    queue := queue.Queue{}

    ordenInverso(&stack, &numero)
    ordenNormal(&queue, &numero)
}
