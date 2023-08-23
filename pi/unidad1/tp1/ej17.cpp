#include <iostream>

bool esBisiesto(int año) {
  return (año % 4 == 0 && año % 100 != 0 || año % 400 == 0);
}

int main() {
  int año;

  std::cout << "Ingrese un año: ";
  std::cin >> año;

  if(esBisiesto(año)) std::cout << año <<" es bisiesto";
  else std::cout << año << " no es bisiesto";

  return 0;
}
