#include <iostream>
#include <string>

int main() {
  std::string frase;
  int longitud = 0;

  std::cout << "Escriba una frase: ";
  std::getline(std::cin, frase);

  for(char c : frase) { // Esto es como un forEach
    if(c == ' ') longitud = 0;
    else longitud++;
  }

  std::cout << longitud;

  return 0;
}
