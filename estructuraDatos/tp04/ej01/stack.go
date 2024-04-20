package main

import "fmt"

type Node struct {
    next *Node
    value int
}

type Stack struct {
    top *Node
}

func (stack *Stack) pushStack(value int) {
    tNode := &Node{value: value}

    if(stack.top == nil) {
        stack.top = tNode
    } else {
        tNode.next = stack.top
        stack.top = tNode
    }
}

func (stack *Stack) popStack() {
    if(stack.top == nil) {
        return
    }

    stack.top = stack.top.next
}

func main() {
    stack := Stack{}

    stack.pushStack(1)
    stack.pushStack(2)
    stack.pushStack(3)
    stack.pushStack(4)

    fmt.Println("Poping...")
    for stack.top != nil {
        fmt.Println("Popped:", stack.top.value)
        stack.popStack()
    }
}
