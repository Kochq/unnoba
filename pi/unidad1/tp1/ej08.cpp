#include <iostream>

int main () {
  char letra;
  float vocales = 0.0;
  int total = 0;
  float porcentaje = 0.0;

  do {
    std::cout << "Ingrese un caracter: ";
    std::cin >> letra;
    total++;

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') vocales++; //Capaz hay una mejor forma de hacer esto, no quiero pensar
  }while (letra != 'n');

  porcentaje = (vocales/total)*100;
  
  std::cout << "Vocales: " << vocales << " caracteres totales: " << total << " porcentaje de vocales: " << porcentaje;

  return 0;
}
