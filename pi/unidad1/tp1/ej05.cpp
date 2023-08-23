#include <iostream>

int main() {
  int fecha; 

  std::cout << "Ingrese una fecha: ";
  std::cin >> fecha;

  int fechaResto = fecha % 10000;
  int año = fecha / 10000;
  int mes = fechaResto / 100;
  int dia = fechaResto % 100;

  std::cout << dia << '/' << mes << '/' << año;

  return 0;
}
