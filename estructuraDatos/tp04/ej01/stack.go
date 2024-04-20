package main

import "fmt"

type Node struct {
    next *Node
    value int
}

type Stack struct {
    top *Node
    len int
}

func (stack *Stack) pushStack(value int) {
    tNode := &Node{value: value}

    if(stack.top == nil) {
        stack.top = tNode
    } else {
        tNode.next = stack.top
        stack.top = tNode
    }

    stack.len++
}

func (stack *Stack) popStack() {
    if(stack.top == nil) {
        return
    }

    stack.top = stack.top.next

    stack.len--
}

func (stack *Stack) length() int {
    return stack.len
}

func main() {
    stack := Stack{len:0}

    stack.pushStack(1)
    stack.pushStack(2)
    stack.pushStack(3)
    stack.pushStack(4)

    fmt.Println("Poping...")
    for stack.top != nil {
        fmt.Printf("queue length %d\n", stack.length())
        fmt.Println("Popped:", stack.top.value)
        stack.popStack()
    }
}
