#include <iostream>
#include <istream>
#include <string>

struct invitado { //Si la estructura no es global la funcion eliminarInv no sabe que existe 
  std::string nombre;
  std::string apellido;
  std::string sexo;
  short edad;
};

void eliminarInv(struct invitado *invitados, std::string nombre, std::string apellido, short cantInvs) { //El array tiene que ser un pointer para poder modificarlo

  for(int i=0; i<cantInvs; i++) {
    if(invitados[i].nombre == nombre && invitados[i].apellido == apellido) {
      for (int j = i; j < cantInvs - 1; j++) { // Para eliminarlo muevo todos los que tiene adelante a una posicion anterior
        invitados[j] = invitados[j + 1];
      }
    }
  }
}

int main() {
  const short MAX = 150;
  short cantInvs = 0;

  invitado invitados[MAX];

  for(int i = 0; i<MAX; i++){
    std::cout << "REGISTRE UN NUEVO INVITADO" << std::endl;

    std::cout << "Ingrese el nombre del invitado: ";
    std::ws(std::cin); //Sin esto a partir del segundo loop el getline lee el espacio en blanco que deja en std::cin
    std::getline(std::cin, invitados[i].nombre);

    std::cout << "Ingrese el apellido del invitado: ";
    std::ws(std::cin); //Sin esto a partir del segundo loop el getline lee el espacio en blanco que deja en std::cin
    std::getline(std::cin, invitados[i].apellido);

    std::cout << "Ingrese el sexo del invitado: ";
    std::ws(std::cin); //Sin esto a partir del segundo loop el getline lee el espacio en blanco que deja en std::cin
    std::getline(std::cin, invitados[i].sexo);

    std::cout << "Ingrese la edad del invitado: ";
    std::cin >> invitados[i].edad;

    cantInvs = i;
    if(invitados[i].nombre == "ZZZ") break;
  }

  //a)
  std::cout << "En total ingresaran " << cantInvs+1 << " invitados a la fiesta";

  //b)
  for(int i=0; i<cantInvs; i++) {
    if(invitados[i].sexo == "mujer" && invitados[i].edad <= 20) std::cout << invitados[i].nombre << std::endl;
  }

  //c)
  eliminarInv(invitados, "Mateo", "Koch", cantInvs);
  return 0;
}
