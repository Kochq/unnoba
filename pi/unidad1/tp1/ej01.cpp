#include <iostream>

int main() {
  for(int i = 1; i <= 100; i++) {
    std::cout << i << ' ';

    if(i % 5 == 0) std::cout << std::endl;
  }

  return 0;
}
