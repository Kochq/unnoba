#include <iostream>

int invertirNum(int num, int invertido = 0) {

  if(num == 0) return invertido;

  int digito = num % 10;

  invertido = invertido * 10 + digito;

  return invertirNum(num / 10, invertido);
}

int main() {
  int num = 3524;

  std::cout << invertirNum(num);

  return 0;
}
