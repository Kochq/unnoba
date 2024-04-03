package busquedabinaria

import "fmt"

func printLista(arr []int, hi int, lo int, mid int) {
    fmt.Printf("\n")
    for _, value := range arr {
        fmt.Printf("%d ", value)
    }
    fmt.Printf("\n")
    for x := range len(arr)+1 {
        switch x {
        case hi-1, lo, mid:
            fmt.Printf("| ")
        default:
            fmt.Printf("  ")
        }
    }
    fmt.Printf("\n")
    for x := range len(arr)+1 {
        switch x {
        case hi-1:
            fmt.Printf("h ")
        case lo: 
            fmt.Printf("l ")
        case mid:
            fmt.Printf("m ")
        default:
            fmt.Printf("  ")
        }
    }
    fmt.Printf("\n\n")
}

func Recursiva(arr []int, buscado int, lo int, hi int, mid int) int {
    mid = (lo + hi) / 2

    if(lo >= hi) {
        return -1
    }

    printLista(arr, hi, lo, mid)

    if(arr[mid] == buscado) {
        return mid+1
    } else if(arr[mid] > buscado) {
        return Recursiva(arr, buscado, lo, mid, mid)
    } else {
        return Recursiva(arr, buscado, mid+1, hi, mid)
    }
}

func Iterativa(arr []int, buscado int) int {
    lo := 0
    hi := len(arr)
    mid := (lo + hi) / 2

    for lo < hi {
        mid = (lo + hi) / 2

        printLista(arr, hi, lo, mid)

        if(arr[mid] == buscado) {
            return mid+1
        } else if(arr[mid] > buscado) {
            hi = mid
        } else {
            lo = mid+1
        }
    }

    if(arr[mid] == buscado) {
        return mid+1
    }
    return -1
}
