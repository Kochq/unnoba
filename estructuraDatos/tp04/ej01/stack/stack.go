package stack

type Node struct {
    next *Node
    value int
}

type Stack struct {
    top *Node
    len int
}

func (stack *Stack) PushStack(value int) {
    tNode := &Node{value: value}

    if(stack.top == nil) {
        stack.top = tNode
    } else {
        tNode.next = stack.top
        stack.top = tNode
    }

    stack.len++
}

func (stack *Stack) PopStack() int {
    if(stack.top == nil) {
        return 0
    }

    value := stack.top.value
    stack.top = stack.top.next

    stack.len--

    return value
}

func (stack *Stack) Length() int {
    return stack.len
}
