package stack

type Node struct {
    next *Node
    value byte
}

type Stack struct {
    top *Node
    len byte
}

func (stack *Stack) PushStack(value byte) {
    tNode := &Node{value: value}

    if(stack.top == nil) {
        stack.top = tNode
    } else {
        tNode.next = stack.top
        stack.top = tNode
    }

    stack.len++
}

func (stack *Stack) PopStack() byte {
    if(stack.top == nil) {
        return 0
    }

    value := stack.top.value
    stack.top = stack.top.next

    stack.len--

    return value
}

func (stack *Stack) Length() byte {
    return stack.len
}
