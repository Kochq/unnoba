package DoubleQ

import "fmt"

type Node struct {
    value int
    next *Node
    prev *Node
}

type DoubleQ struct {
    top *Node
    bot *Node
    len int
}

func (dq *DoubleQ) Push(value int, bot bool) {
    nNode := &Node{value:value}

    if dq.bot == nil && dq.top == nil {
        dq.bot = nNode
        dq.top = nNode
    } else {
        if bot {
            nNode.next = dq.bot
            dq.bot.prev = nNode
            dq.bot = nNode
        } else {
            dq.top.next = nNode
            nNode.prev = dq.top
            dq.top = nNode
        }
    }

    dq.len++
    return
}

func (dq *DoubleQ) Pop(bot bool) int {
    value := 0

    if bot {
        value = dq.bot.value
        dq.bot = dq.bot.next
        if dq.bot != nil {
            dq.bot.prev = nil
        }
    } else {
        value = dq.top.value
        dq.top = dq.top.prev
        if dq.top != nil {
            dq.top.next = nil
        }
    }

    if dq.bot == nil || dq.top == nil {
        dq.bot = nil
        dq.top = nil
    }

    return value
}

func (dq DoubleQ) Print() {
    for dq.bot != nil {
        fmt.Print(dq.bot.value, " ")
        dq.Pop(true)
    }

    fmt.Print("\n")
}

func (dq *DoubleQ) Split() (dq1 *DoubleQ, dq2 *DoubleQ) {
    mid := dq.len / 2
    dq1 = &DoubleQ{}
    dq2 = &DoubleQ{}

    for i := 0; i < mid; i++ {
        dq1.Push(dq.bot.value, false)
        dq.Pop(true)
    }

    for dq.bot != nil {
        dq2.Push(dq.bot.value, false)
        dq.Pop(true)
    }

    return dq1, dq2
}
