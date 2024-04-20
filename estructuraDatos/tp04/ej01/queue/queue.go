package queue

type Node struct {
    next *Node
    value int
}

type Queue struct {
    top *Node
    bot *Node
    len int
}

func (queue *Queue) PushQueue(value int) {
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

func (queue *Queue) PopQueue() int {
    if(queue.top == nil) {
        return 0
    }

    value := queue.top.value
    queue.top = queue.top.next

    if(queue.top == nil) {
        queue.bot = nil
    }

    queue.len--

    return value
}

func (queue *Queue) Length() int {
    return queue.len
}
