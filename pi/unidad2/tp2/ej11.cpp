#include <iostream>

int main() {
  int cantidad[10] = {0};
  int n;

  while(1) {
    std::cout << "Ingrese un numero positivo: ";
    std::cin >> n; 
    // Supongo que cuando dice que los numeros no deben almacenarse, se refiere a guardarlos todos en un array y evaluar despues.
    // Entiendo que esto si se puede hacer, si no, no podrias operar con el numero

    if(n < 0) break;

    while(n > 0) {
      cantidad[n%10]++;
      n = n/10;
    }
  }

  for(int i=0; i<10; i++) {
    std::cout << "El " << i << " Aparecio " << cantidad[i] << " veces" << std::endl;
  }
}
