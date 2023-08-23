#include <iostream>

int main() {
  int negativos = 0;
  int numero = 0;

  do {
    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    if(numero < 0) negativos++;
  }while (numero != 0);

  std::cout << "Ingresaste un total de " << negativos << " Numeros negativos";

  return 0;
}
