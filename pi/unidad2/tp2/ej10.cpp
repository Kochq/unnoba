#include <iostream>

int main() {
  short cantSocios = 0;
  const short MAX = 200;
  int socios[MAX];
  char dato;

  void casoA(int *socios, short &cantSocios, const short MAX);
  void casoB(int *socios, short cantSocios);
  void casoC(int *socios, short &cantSocios);
  void casoD(int *socios, short cantSocios);

  do {
    std::cout << "'A': Ingresar DNI." << std::endl;
    std::cout << "'B': Buscar DNI." << std::endl;
    std::cout << "'C': Eliminar DNI." << std::endl;
    std::cout << "'D': Imprimir Lista." << std::endl;
    std::cout << "'Q': Salir." << std::endl << std::endl;

    std::cout << "> ";
    std::cin >> dato;

    switch (dato) {
      case 'A': {
        casoA(socios, cantSocios, MAX);
        break;
      }
      case 'B': { 
        casoB(socios, cantSocios);
        break;
      }
      case 'C': {
        casoC(socios, cantSocios);
        break;
      }
      case 'D': {
        casoD(socios, cantSocios);
        break;
      }
      case 'Q':
        std::cout << "Chau";
        break;
      default:
        std::cout << "Opcion incorrecta, vuelva a intentarlo" << std::endl;
    }
  }while (dato != 'Q');

  return 0;
}
void casoA(int *socios, short &cantSocios, const short MAX) {
  if (cantSocios < MAX) {
    std::cout << "Ingrese el numero de documento del nuevo socio: ";
    std::cin >> socios[cantSocios];
    cantSocios++;
  } 
  else std::cout << "Limite de usuarios alcanzado" << std::endl;
}

void casoB(int *socios, short cantSocios) {
  bool encontrado = 0;
  int dni;
  std::cout << "Ingrese el numero de documento que quiere buscar: ";
  std::cin >> dni;

  for(int i=0; i<cantSocios; i++) {
    if (socios[i] == dni) {
      encontrado = 1;
      std::cout << "Cuota al dia" << std::endl;
    }
  }

  if(!encontrado) std::cout << "Socio con deuda" << std::endl;
}

void casoC(int *socios, short &cantSocios) {
  bool encontrado = 0;
  int dni;

  std::cout << "Ingrese el numero de documento que quiere eliminar: ";
  std::cin >> dni;

  for (int i = 0; i < cantSocios; i++) {
    if (socios[i] == dni) {
      encontrado = 1;

      for (int j = i; j < cantSocios - 1; j++) {
        socios[j] = socios[j + 1];
      }

      cantSocios--;

      std::cout << "DNI eliminado correctamente" << std::endl;
      break;
    }
  }

  if (!encontrado) std::cout << "El DNI no fue encontrado en la lista" << std::endl;
}

void casoD(int *socios, short cantSocios){
  for(int i=0; i<cantSocios; i++) {
    std::cout << "Socio: " << socios[i] << std::endl;
  } 
}

void casoQ() {
}
