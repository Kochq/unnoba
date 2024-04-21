package main

import (
	"fmt"
    "estructuraDatos/tp04/ej01/stack"
	"strings"
)

func esPalindromo(stack *stack.Stack, texto string) bool {
	texto = strings.ToLower(strings.ReplaceAll(texto, " ", ""))

	for i := 0; i < len(texto)/2; i++ {
		stack.PushStack(texto[i])
	}

	startIndex := len(texto)/2
	if len(texto)%2 != 0 {
		startIndex++
	}

	for i := startIndex; i < len(texto); i++ {
		char := stack.PopStack()
		if char != texto[i] {
			return false
		}
	}

	return true
}

func main() {
    stack := stack.Stack{}

    fmt.Print(esPalindromo(&stack, "somos o no Somos"))
}
