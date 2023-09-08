#include <iostream>

void mostrarArray(int miArray[]) {
  for (int i = 0; i<20; i++) {
    std::cout << miArray[i] << " ";
  }
}

void a(int miArray[]) {
  for (int i = 0; i<20; i++) {
    std::cout << "Ingrese un numero entero: ";
    std::cin >> miArray[i];
  }

  mostrarArray(miArray);
}

void b(int miArray[]) {
  for (int i = 20; i>0; i--) {
    std::cout << "Ingrese un numero entero: ";
    std::cin >> miArray[i];
  }

  mostrarArray(miArray);
}

void c(int miArray[]) {

  for (int i = 0; i<20; i++) {
    std::cout << "Ingrese un numero entero: ";
    std::cin >> miArray[i];
  }

  //Ordenar
  for (int i = 0; i<20; i++) {
    for (int j = i+1; j<20; j++) {
      if (miArray[j] < miArray[i]) {
        int temp = miArray[i];
        miArray[i] = miArray[j];
        miArray[j] = temp;
      }
    }
  }

  mostrarArray(miArray);
}

int main() {
  int numerosA[20];
  int numerosB[20];
  int numerosC[20];
  int n;

  a(numerosA);
  b(numerosB);
  c(numerosC);
}
