package main

import "fmt"

type Node struct {
    next *Node
    value int
}

type Queue struct {
    top *Node
    bot *Node
    len int
}

func (queue *Queue) pushQueue(value int) {
    tNode := &Node{value: value}

    if(queue.top == nil) {
        queue.top = tNode
        queue.bot = tNode
    } else {
        queue.bot.next = tNode
        queue.bot = tNode
    }

    queue.len++
}

func (queue *Queue) popQueue() {
    if(queue.top == nil) {
        return
    }

    queue.top = queue.top.next

    if(queue.top == nil) {
        queue.bot = nil
    }

    queue.len--
}

func (queue *Queue) length() int {
    return queue.len
}

func main() {
    queue := Queue{len:0}

    queue.pushQueue(1)
    queue.pushQueue(2)
    queue.pushQueue(3)
    queue.pushQueue(4)

    fmt.Println("Poping...")
    for queue.top != nil {
        fmt.Printf("queue length %d\n", queue.length())
        fmt.Println("Popped:", queue.top.value)
        queue.popQueue()
    }
}
