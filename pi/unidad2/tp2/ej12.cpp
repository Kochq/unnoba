#include <iostream>

int main() {
  bool cantidad[10] = {0};
  int n;

  while(1) {
    std::cout << "Ingrese un numero positivo: ";
    std::cin >> n;

    if(n < 0) break;

    while(n > 0) {
      cantidad[n%10] = 1;
      n = n/10;
    }
  }

  for(int i=0; i<10; i++) {
    if (cantidad[i]) std::cout << "El " << i << " Apareció." << std::endl;
    else std::cout << "El " << i << " No apareció." << std::endl;
  }
}
