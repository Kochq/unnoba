#include <iostream>
#include <string>

struct cliente {
  std::string nombre = "" ;
  std::string apellido = "";
  std::string email = "";
  int dni = 0;
  int cumple = 0;
  int total = 0; 
};

void carga(cliente clientes[], short &cantClientes) {
  std::string nombreTemp = ""; std::string apellidoTemp = ""; std::string emailTemp = "";
  int dniTemp; int cumpleTemp = 0; int totalTemp = 0;

  while (nombreTemp != "z") {
    std::cout << "Ingrese el nombre del cliente: ";
    std::getline(std::cin>>std::ws, nombreTemp);
    if(nombreTemp == "z") break;

    std::cout << "Ingrese el apellido del cliente: ";
    std::getline(std::cin>>std::ws, apellidoTemp);

    std::cout << "Ingrese el email del cliente: ";
    std::getline(std::cin>>std::ws, emailTemp);

    std::cout << "Ingrese el dni del cliente: ";
    std::cin >> dniTemp;

    std::cout << "Ingrese el cumpleaños del cliente: ";
    std::cin >> cumpleTemp;

    std::cout << "Ingrese el monto total del cliente: ";
    std::cin >> totalTemp;

    if(cantClientes == 0) {
      clientes[0] = {nombreTemp, apellidoTemp, emailTemp, dniTemp, cumpleTemp, totalTemp};
    } 
    else {
      for(short i = 0; i < cantClientes; i++){ 
        if(clientes[i].dni > dniTemp) {
          for(short j = cantClientes; j >= i; j--) {
            clientes[j+1] = {
              clientes[j].nombre, 
              clientes[j].apellido, 
              clientes[j].email, 
              clientes[j].dni, 
              clientes[j].cumple, 
              clientes[j].total
            };
          }

          clientes[i] = {nombreTemp, apellidoTemp, emailTemp, dniTemp, cumpleTemp, totalTemp};
          break;
        }
        else clientes[cantClientes] = {nombreTemp, apellidoTemp, emailTemp, dniTemp, cumpleTemp, totalTemp};
      } 
    }
    cantClientes++;
  }
}

int main() {
  short cantClientes = 0;
  const short MAX = 100;
  short meses[13] = {0};
  cliente clientes[MAX];

  //A)
  carga(clientes, cantClientes);

  for(short i = 0; i < cantClientes; i++) {
    std::cout << "<<<<<<<<<<<<<<< OTRO CLIENTE <<<<<<<<<<<<<<<"<< std::endl;
    std::cout << "Nombre: " << clientes[i].nombre << std::endl;
    std::cout << "Apellido: " << clientes[i].apellido << std::endl;
    std::cout << "Email: " << clientes[i].email << std::endl;
    std::cout << "DNI: " << clientes[i].dni << std::endl;
    std::cout << "Cumple: " << clientes[i].cumple << std::endl;
    std::cout << "Total: " << clientes[i].total << std::endl;
  }

  //B)
  for(short i = 0; i < cantClientes; i++) {
    short mes = clientes[cantClientes].cumple % 100;
    meses[mes]++;
  }

  //C)
  int mayorMonto = clientes[0].total;
  std::string mayorMontoNombre = clientes[0].nombre;
  for(short i = 0; i < cantClientes; i++) {
    if(clientes[i].total > mayorMonto) {
      mayorMonto = clientes[i].total;
      mayorMontoNombre = clientes[i].nombre;
    }
  }

  std::cout << "El cliente con el mayor monto es: " << mayorMontoNombre;

  return 0;
}
