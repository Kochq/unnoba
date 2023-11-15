#include <iostream>

int sumaCuadrada(int num, int suma = 0) {
  if(num == 0) return suma;
  return sumaCuadrada(num-1, suma + num*num);
}

int main() {
  int num = 4;

  std::cout << sumaCuadrada(num);

  return 0;
}
