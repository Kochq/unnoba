#include <iostream>

bool esPalindromo(std::string str, int length) {
  if(str[0] != str[length]) return false;
  else if(str != "") esPalindromo(str.substr(1,length), length-1);

  return true;
}

int main() {
  std::string str = "dabale arroz a la zorra el abad";

  std::cout << esPalindromo(str, str.length()-1);

  return 0;
}
