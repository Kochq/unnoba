package main

import (
    "fmt"
    "estructuraDatos/tp04/ej01/stack"
)
var pares = map[byte]byte{
    '(': ')',
    '[': ']',
    '{': '}',
}

func abre(char byte) bool {
    charQueAbren := "([{"

    for _, abre := range charQueAbren {
        if char == byte(abre) {
            return true
        }
    }

    return false
}

func validar(stack *stack.Stack, text string) bool {
    for _, char := range text {
        char := byte(char)

        if abre(char) {
            stack.PushStack(char)
        } else {
            lastChar := stack.PopStack()
            if pares[lastChar] != char {
                return false
            }
        }
    }

    return stack.Length() == 0
}

func main() {
    stack := stack.Stack{}
    fmt.Print(validar(&stack, "([[]]([)])"))
}
