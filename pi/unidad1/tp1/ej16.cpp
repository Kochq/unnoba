#include <iostream>

bool coordenadas(int x, int y) {
  if(3*x + 2 == y) return 1;
  return 0;
}

int main() {
  std::cout << coordenadas(1, 5);
}
