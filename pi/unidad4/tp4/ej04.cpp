#include <iostream>

int digitalizador(int num, int digitos = 0) {
  if(num == 0) return digitos;
  return digitalizador(num / 10, digitos + 1);
}

int main() {
  int num = 12340;

  std::cout << digitalizador(num);

  return 0;
}
