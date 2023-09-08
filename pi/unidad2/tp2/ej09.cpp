#include <iostream>

void inverter(int arreglo[], const short largo) {
  int inicio = 0;
  int fin = largo-1;

  while (inicio < fin) {
    int temp = arreglo[4-fin];
    arreglo[4-fin] = arreglo[fin];
    arreglo[fin] = temp;

    inicio++;
    fin--;
  }

  for (int i = 0; i<largo; i++) {
    std::cout << arreglo[i];
  }
}

int main(){
  int arreglo[5] = {1,2,3,4,5};
  const short largo = 5;

  inverter(arreglo, largo);

  return 0;
}
