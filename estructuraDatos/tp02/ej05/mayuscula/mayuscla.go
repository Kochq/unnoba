package mayuscula

func Recursiva(cadena string, index int) int {
    if(index == len(cadena)) {
        return -1
    }

    char := cadena[index]

    if char >= 41 && char <= 90 {
        return index
    }

    return Recursiva(cadena, index+1)
}

func Iterativa(cadena string) int {
    for i, char := range cadena {
        if char >= 41 && char <= 90 {
            return i
        }
    }
    
    return -1
}
