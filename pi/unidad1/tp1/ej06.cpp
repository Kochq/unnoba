// No se si entendi bien la consigna, supongo que es asi
#include <iostream>

int main() {
  float suma;
  int n;
  
  std::cout << "Dame n: ";
  std::cin >> n;

  for(int i = 1; i <= n; i++) suma += 1.0/i; // Si ponen 1 en vez de 1.0 no anda xd

  std::cout << suma;

  return 0;
}
