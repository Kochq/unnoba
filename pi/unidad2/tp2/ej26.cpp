#include <iostream>
#include <string>

//Casi lo mismo que using namespase std pero mejor 
using std::cout;
using std::cin;
using std::string;
using std::ws;

struct empleado {
  string legajo, nombre;
  int dni;
};

struct sucursal {
  string nombre, legajo;
};

string buscarLegajo(empleado empleados[], short cantEmpleados, string legajoBuscado);
void listarSucursales(sucursal sucursales[], short cantSucursales, empleado empleados[], short cantEmpleados);
void cargaSucursales(sucursal sucursales[], short &cantSucursales, empleado empleados[], short cantEmpleados);
void cargaEmpleados(empleado empleados[], short &cantEmpleados);

int main() {
  const short MAX_EMPLEADOS = 2000;
  const short MAX_SUCURSALES = 20;
  short cantEmpleados = 0;
  short cantSucursales = 0;

  empleado empleados[MAX_EMPLEADOS];
  sucursal sucursales[MAX_SUCURSALES];

  char opcion;
  do {
    cout << "Seleccione una opcion:" << std::endl;
    cout << "[1] : Cargar nuevo empleado." << std::endl;
    cout << "[2] : Cargar nueva sucursal." << std::endl;
    cout << "[3] : Buscar por legajo." << std::endl;
    cout << "[4] : Mostrar listado de sucursales." << std::endl;
    cout << "[5] : Salir." << std::endl;
    cin >> opcion;

    string legajoBuscado, nombreEncontrado;
    switch (opcion) {
      case '1':
        cargaEmpleados(empleados, cantEmpleados);
        break;

      case '2':
        cargaSucursales(sucursales, cantSucursales, empleados, cantEmpleados);
        break;

      case '3':
        cout << "Ingrese el legajo a buscar: ";
        cin >> legajoBuscado;
        nombreEncontrado = buscarLegajo(empleados, cantEmpleados, legajoBuscado);
        if(nombreEncontrado != "") cout << "El legajo " << legajoBuscado << " pertenece a " << nombreEncontrado << std::endl;
        else cout << "El legajo " << legajoBuscado << " no pertenece a ningun empleado" << std::endl;
        break;

      case '4':
        listarSucursales(sucursales, cantSucursales, empleados, cantEmpleados);
        break;

      case '5':
        break;
      default:
        cout << "Opcion invalida." << std::endl;
        break;
    }
  }while (opcion != '5');

  return 0;
}

void cargaEmpleados(empleado empleados[], short &cantEmpleados) {
  char opcionEmp;

  do {
    cout << "Ingrese el nombre del empleado: ";
    getline(cin>>ws, empleados[cantEmpleados].nombre);

    cout << "Ingrese el legajo del empleado: ";
    getline(cin>>ws, empleados[cantEmpleados].legajo);

    cout << "Ingrese el DNI del empleado: ";
    cin >> empleados[cantEmpleados].dni;

    cantEmpleados++;
    cout << "Usuario cargado correctamente." << std::endl;
    cout << "¿Desea cargar otro usuario? (S/n)" << std::endl;
    cin >> opcionEmp;

  }while (opcionEmp != 'N' && opcionEmp != 'n');
}

string buscarLegajo(empleado empleados[], short cantEmpleados, string legajoBuscado) {
  for(short i = 0; i < cantEmpleados; i++) if(empleados[i].legajo == legajoBuscado) return empleados[i].nombre;
  return "";
}

void cargaSucursales(sucursal sucursales[], short &cantSucursales, struct empleado empleados[], short cantEmpleados) {
  char opcionSuc;
  string legajoTemp, nombreTemp;
  bool legajoEncontrado;

  do {
    do {
      legajoEncontrado = 0;
      cout << "Ingrese el nombre de la sucursal: ";
      getline(cin>>ws, nombreTemp);

      cout << "Ingrese el legajo del encargado: ";
      getline(cin>>ws, legajoTemp);

      if(buscarLegajo(empleados, cantEmpleados, legajoTemp) != "") legajoEncontrado = 1;

      if(!legajoEncontrado) cout << "El encargado no se encuentra en la lista de empleados, ingrese un encargado valido" << std::endl;
    }while (!legajoEncontrado);

    sucursales[cantSucursales] = {nombreTemp, legajoTemp};
    cantSucursales++;
    cout << "Sucursal cargada correctamente" << std::endl;
    cout << "¿Desea cargar otra usuario? (S/n)";
    cin >> opcionSuc;

  }while (opcionSuc != 'N' && opcionSuc != 'n');
}

void listarSucursales(sucursal sucursales[], short cantSucursales, struct empleado empleados[], short cantEmpleados) {
  cout << "===== LISTADO DE SUCURSALES =====" << std::endl;
  for(short i = 0; i < cantSucursales; i++) {
    cout << "Nombre: " << sucursales[i].nombre << std::endl;
    cout << "Encargado: " << buscarLegajo(empleados, cantEmpleados, sucursales[i].legajo) << std::endl;
  }
  cout << "===== LISTADO DE SUCURSALES =====" << std::endl;
}
