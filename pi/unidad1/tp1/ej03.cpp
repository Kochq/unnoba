#include <iostream>

int main() {
  char letra;
  char letraAnterior = 123; // z = 122 xd
  char primeraLetra;

  for(int i = 0; i < 3; i++) {
    std::cout << "Escriba una letra: ";
    std::cin >> letra;

    if(letra < letraAnterior) primeraLetra = letra;
    letraAnterior = letra;
  }

  std::cout << "La letra que viene primero es " << primeraLetra;

  return 0;
}
