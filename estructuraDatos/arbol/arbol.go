package main

import "fmt"

type Arbol struct {
    value int
    left  *Arbol
    right *Arbol
}

func (arbol *Arbol) pushArbol(value int) {
	if arbol == nil {
		return
	}

	if value > arbol.value {
		if arbol.right == nil {
			arbol.right = &Arbol{value: value}
		} else {
			arbol.right.pushArbol(value)
		}
	} else {
		if arbol.left == nil {
			arbol.left = &Arbol{value: value}
		} else {
			arbol.left.pushArbol(value)
		}
	}
}

func (arbol *Arbol) printArbol() {
    if arbol == nil {
        return
    }

    fmt.Println(arbol.value)

    arbol.left.printArbol()
    arbol.right.printArbol()
}

func main() {
    arbol := &Arbol{value: 10}
    arbol.pushArbol(5)
    arbol.pushArbol(15)
    arbol.pushArbol(3)
    arbol.pushArbol(20)
    arbol.printArbol()
}
