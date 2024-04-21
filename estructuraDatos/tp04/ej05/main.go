package main

import (
    "fmt"
    "estructuraDatos/tp04/ej01/stack"
)

func abre(char byte) bool {
    charQueAbren := "([{"

    for _, abre := range charQueAbren {
        if char == byte(abre) {
            return true
        }
    }

    return false
}

func cierra(char1 byte, char2 byte) bool {
    if(char1 == '(' && char2 == ')') {
        return true
    } else if(char1 == '[' && char2 == ']') {
        return true
    } else if(char1 == '{' && char2 == '}') {
        return true
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
            if !cierra(lastChar, char) {
                return false
            }
        }
    }

    return true
}

func main() {
    stack := stack.Stack{}
    fmt.Print(validar(&stack, "([[]]([)])"))
}
