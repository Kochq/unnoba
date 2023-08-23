#include <iostream>

void casoA();
void casoB();
void casoC();
void casoD();
//Esto es por comodidad, si no tendria que definir todas las funciones aca y la main me quedaria abajo :p

int main() {
  char dato;

  do {
    std::cout << "'A': Invertir número." << std::endl;
    std::cout << "'B': Sumatiora de digitos." << std::endl;
    std::cout << "'C': Decir si son multiplos." << std::endl;
    std::cout << "'D': Salir." << std::endl << std::endl;

    std::cout << "> ";
    std::cin >> dato;

    switch (dato) {
      case 'A':
        casoA();
        break;
      case 'B':
        casoB();
        break;
      case 'C':
        casoC();
        break;
      case 'D':
        casoD();
        break;
      default:
        std::cout << "Opcion incorrecta, vuelva a intentarlo" << std::endl;
        break;
    }
  }while (dato != 'D');

  return 0;
}

void casoA() {
  int numero; 
  int numeroInvertido = 0;

  std::cout << "Ingrese el numero que quiere invertir: ";
  std::cin >> numero;

  while (numero != 0) {
    int digito = numero % 10;
    numeroInvertido = numeroInvertido * 10 + digito;
    numero /= 10;
  }

  std::cout << "El numero invertido queda... " << numeroInvertido << std::endl;
}

void casoB() {
  int cantidad, n;
  int total = 0;

  std::cout << "¿Cantos numeros? ";
  std::cin >> cantidad;

  for(int i = 0; i < cantidad; i++) {
    std::cout << "Ingrese un numero: ";
    std::cin >> n;

    total += n;
  }

  std::cout << "La suma total de los digitos es: " << total << std::endl;
}

void casoC() {
  int n, mult;
  std::cout << "Ingresa el numero a evaluar: ";
  std::cin >> n;
  std::cout << "Ingresa el multiplo: ";
  std::cin >> mult;
  
  bool esMult = n % mult == 0;

  if(esMult) std::cout << n << " Es multiplo de " << mult << std::endl;
  else std::cout << n << " No es multiplo de " << mult << std::endl;
}

void casoD() {
  std::cout << "Chau";
}
