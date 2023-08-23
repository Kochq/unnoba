#include <iostream>

int main() {
  char dato;

  do {
    std::cout << "¿Confirmar? s/n ";
    std::cin >> dato;
  }while (dato != 's' && dato != 'n');

  if(dato == 's') std::cout << "usted eligio SI";
  else std::cout << "usted eligio NO";

  return 0;
}
