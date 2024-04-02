package vocalesConsonantes

import "strings"

func Recursiva(cadena string, index int, cantVocales int, cantConsonantes int) (int, int) {
    if index == len(cadena) {
        return cantVocales, cantConsonantes
    }

    vocales := "aeiouAEIOU"
    consonantes := "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"
    
    char := rune(cadena[index])

    if strings.ContainsRune(vocales, char) {
        cantVocales++
    } else if strings.ContainsRune(consonantes, char) {
        cantConsonantes++
    }

    return Recursiva(cadena, index+1, cantVocales, cantConsonantes)
}

func Iterativa(cadena string) (int, int) {
    vocales := "aeiouAEIOU"
    consonantes := "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"

    cantVocales := 0
    cantConsonantes := 0

    for _, char := range cadena {
        if strings.ContainsRune(vocales, char) {
            cantVocales++
        } else if strings.ContainsRune(consonantes, char) {
            cantConsonantes++
        }
    }

    return cantVocales, cantConsonantes
}
