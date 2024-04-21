package main

import "fmt"

type Node struct {
    next *Node
    prev *Node
    value int
}

type Queue struct {
    top *Node
    bot *Node
    len int
}

// true -> top false -> bot
func (queue *Queue) PushQueue(value int, donde bool) {
    tNode := &Node{value: value}

    if(queue.top == nil) {
        queue.top = tNode
        queue.bot = tNode
        queue.len++
        return
    }

    if(donde == true) {
        tNode.prev = queue.top
        queue.top.next = tNode
        queue.top = tNode
    } else {
        tNode.next = queue.bot
        queue.bot.prev = tNode
        queue.bot = tNode
    }

    queue.len++
}

func (queue *Queue) PopQueue(donde bool) int {
    value := 0
    if(queue.top == nil || queue.bot == nil) {
        return 0
    }

    if(donde) {
        value = queue.top.value
        queue.top = queue.top.prev

        if(queue.top != nil) {
            queue.top.next = nil
        } else {
            queue.bot = nil
        }
    } else {
        value = queue.bot.value
        queue.bot = queue.bot.next

        if(queue.bot != nil) {
            queue.bot.prev = nil
        } else {
            queue.top = nil
        }
    }

    queue.len--

    return value
}

func (queue *Queue) Length() int {
    return queue.len
}

func main() {
    queue := Queue{}

    queue.PushQueue(1, true)
    queue.PushQueue(2, false)
    queue.PushQueue(3, true)
    queue.PushQueue(4, true)
    queue.PushQueue(5, true)
    fmt.Print(queue.PopQueue(false))
    fmt.Print(queue.PopQueue(true))
    fmt.Print(queue.PopQueue(false))
    fmt.Print(queue.PopQueue(false))
    fmt.Print(queue.PopQueue(false))
    fmt.Print(queue.PopQueue(false))
    fmt.Print(queue.PopQueue(true))
    fmt.Print(queue.PopQueue(true))
    fmt.Print(queue.PopQueue(true))
    fmt.Print(queue.PopQueue(true))
    fmt.Print(queue.PopQueue(true))
}
