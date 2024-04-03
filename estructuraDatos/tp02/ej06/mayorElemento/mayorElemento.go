package mayorelemento

func Recursiva(arreglo []int, mayor int, index int) int {
    if index == len(arreglo) {
        return mayor
    }

    coso := arreglo[index]

    if coso > mayor {
        mayor = coso
    }

    return Recursiva(arreglo, mayor, index+1)
}

func Iterativa(arreglo []int) int {
    mayor := arreglo[0]

    for _, coso := range arreglo {
        if coso > mayor {
            mayor = coso
        }
    }

    return mayor
}
