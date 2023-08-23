#include <iostream>
#include <string>
#include <cctype>

int main() {
  std::string cadena, cadenaNormal;

  std::cout << "Ingrese la cadena de texto por favor gracias: ";
  std::getline(std::cin, cadena);

  for(int i = 0; i < cadena.length(); i++) {
    if(i == 0) cadenaNormal.push_back(toupper(cadena[i]));
    else cadenaNormal.push_back(tolower(cadena[i]));
  }

  std::cout << cadenaNormal;

  return 0;
}
