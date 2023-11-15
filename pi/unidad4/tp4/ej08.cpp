#include <iostream>
#include <string>

std::string invertirString(const std::string& str, std::string strInv = "") {
    if (str.empty()) return strInv;
    // str.substr(1) devuelve el string sin el primer caracter
    return invertirString(str.substr(1), strInv = str[0] + strInv);
}

int main() {
    std::cout << invertirString("pito");

    return 0;
}
