#include <iostream>
#include <string>

int main() {
    std::string cadena, cadenaInversa;

    std::cout << "Ingrese una cadena de caracteres: ";
    std::getline(std::cin, cadena);

    for (int i = cadena.length() - 1; i >= 0; --i) {
        cadenaInversa.push_back(cadena[i]); 
        //.push_back() es lo mismo que .append() en python
    }
    
    std::cout << "Cadena invertida '" << cadenaInversa <<"'" ; 

    return 0;
}
