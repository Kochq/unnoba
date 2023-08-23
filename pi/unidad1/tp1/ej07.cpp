#include <iostream>

int main() {
  int n, nActual, menor, mayor, aux;
  float promedio, total;

  std::cout << "ene: ";
  std::cin >> n;

  for(int i = 0; i < n; i++) {
    std::cout << "Ingrese un numero: ";
    std::cin >> nActual;

    if(i == 0) {
      menor = nActual;
      mayor = nActual;
    }else {
      if(nActual < menor) menor = nActual;
      if(nActual > mayor) mayor = nActual;
    }
    total += nActual;
  }

  promedio = total/n;

  std::cout << "Mayor: " << mayor << " Menor: " << menor << " Promedio: " << promedio;
}
