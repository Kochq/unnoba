package invertirarreglo

func Recursiva2(arr []int) []int {
    if(len(arr) == 0) {
        return arr
    }

    tmpArr := Recursiva2(arr[1:])

    return append(tmpArr, arr[0])
}

func Recursiva(arr []int, inicio, fin int) {
    if inicio < fin {
        arr[inicio], arr[fin] = arr[fin], arr[inicio]

        Recursiva(arr, inicio+1, fin-1)
    }
}

func Iterativa(arr []int) {
    inicio := 0
    fin := len(arr)-1

    for inicio < fin {
        arr[inicio], arr[fin] = arr[fin], arr[inicio]

        inicio++
        fin--
    }
}
