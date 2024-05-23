package main

import "fmt"

type Node struct {
    next *Node
    value int
    lvl int
}

type ColaP struct {
    top *Node
    bot *Node
    len int
}

func (cola *ColaP) PushQueue(value int, lvl int) {
    tNode := &Node{value: value, lvl: lvl}

    if(cola.top == nil) {
        cola.top = tNode
        cola.bot = tNode
    } else {
        cola.bot.next = tNode
        cola.bot = tNode
    }

    cola.len++
}

func sacaNodo(nodo *Node) {
    if nodo.next != nil {
        nodo.next = nodo.next.next
    } else {
        nodo = nodo.next
    }
}

func (cola ColaP) printC() {
    for cola.top != nil {
        fmt.Println(cola.top)
        cola.top = cola.top.next
    }
}

func (cola *ColaP) PopQueue() int {
    valor := 0
    cAux := cola.top
    cAuxAnt := cAux

    if cAux.lvl == 3 {
        valor = cAux.value
        cAux = cAux.next
        cola.top = cola.top.next
        return valor
    }
    // CAUX NO ES

    cLvl := cAux.lvl


    for cAux != nil {
        if cAux.next != nil {
            if cAux.next.lvl == 3 {
                valor = cAux.next.value
                sacaNodo(cAux)
                return valor
            } else if cAux.next.lvl > cLvl {
                cLvl = cAux.next.lvl
                cAuxAnt = cAux
            }
        }

        cAux = cAux.next
    }

    if cAuxAnt.next != nil {
        valor = cAuxAnt.next.value
        if cAuxAnt.next.lvl > cola.top.lvl {
            sacaNodo(cAuxAnt)
        } else {
            valor = cola.top.value
            cola.top = cola.top.next
        }
    }

    return valor
}

func main() {
    cola := &ColaP{}

    cola.PushQueue(1, 1)
    cola.PushQueue(2, 1)
    cola.PushQueue(3, 2)
    cola.PushQueue(4, 1)
    cola.PushQueue(5, 3)
    cola.PushQueue(6, 1)

    cola.printC()

    fmt.Println(cola.PopQueue())
    cola.printC()
}
