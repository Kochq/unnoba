#include <iostream>

int productoSuma(int term1, int term2, int producto = 0) {
  if(term2 == 0) return producto;
  return productoSuma(term1, term2-1, producto + term1);
}

int main() {
  std::cout << productoSuma(7, 4);

  return 0;
}
