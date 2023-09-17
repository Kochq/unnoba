#include <iostream>
#include <string>

struct ciudadano {
  std::string nombre, apellido, direccion;
  int tipoDocumento, nroDocumento;
  long fechaNacimiento; //AAAAMMDD
  char sexo;
};

void cargarCiudadano(struct ciudadano *ciudadanos, short &cantCiudadanos) {
  short tipoDNI;

  do {
    std::cout << "Ingrese el nombre del ciudadano: ";
    std::cin >> ciudadanos[cantCiudadanos].nombre;

    std::cout << "Ingrese el apellido del ciudadano: ";
    std::cin >> ciudadanos[cantCiudadanos].apellido;

    std::cout << "Ingrese la direccion del ciudadano: ";
    std::getline(std::cin>>std::ws, ciudadanos[cantCiudadanos].direccion);

    do {
      std::cout << "Ingrese un tipo de documento valido para el ciudadano: ";
      std::cin >> tipoDNI;
    }while (tipoDNI != 1 && tipoDNI != 2 && tipoDNI != 3);
    ciudadanos[cantCiudadanos].tipoDocumento = tipoDNI;

    std::cout << "Ingrese el nro de documento del ciudadano: ";
    std::cin >> ciudadanos[cantCiudadanos].nroDocumento;

    std::cout << "Ingrese la fecha de nacimiento del ciudadano (AAAAMMDD): ";
    std::cin >> ciudadanos[cantCiudadanos].fechaNacimiento;

    std::cout << "Ingrese el sexo del ciudadano (M/F): ";
    std::cin >> ciudadanos[cantCiudadanos].sexo;

    cantCiudadanos++;

  }while (ciudadanos[cantCiudadanos-1].nombre != "Pepe" || ciudadanos[cantCiudadanos-1].apellido != "Argento");
}

void mostrarRegistro(struct ciudadano ciudadanos[], short cantCiudadanos) {
  for (int i=0; i<cantCiudadanos; i++) {
    long fechaResto = ciudadanos[i].fechaNacimiento % 10000;
    long año = ciudadanos[i].fechaNacimiento / 10000;
    long mes = fechaResto / 100;
    long dia = fechaResto % 100;

    std::string tipoDNI = ciudadanos[i].tipoDocumento == 1 ? "DNI" : ciudadanos[i].tipoDocumento == 2 ? "Pasaporte" : "Otro";
    std::string sexo = ciudadanos[i].sexo == 'F' ? "Femenino" : "Masculino";

    std::cout << "Nombre y Apellido: " << ciudadanos[i].nombre << " " << ciudadanos[i].apellido << std::endl;
    std::cout << "Direccion: " << ciudadanos[i].direccion << std::endl;
    std::cout << "Fecha de nacimiento: " << dia << "/" << mes << "/" << año << std::endl;
    std::cout << "Tipo de documento: " << tipoDNI << std::endl;
    std::cout << "Número de documento: " << ciudadanos[i].nroDocumento << std::endl;
    std::cout << "Sexo: " << sexo << std::endl;
  }
}

void registroPorSexo(struct ciudadano ciudadanos[], short cantCiudadanos, char sexo) {
  ciudadano ciudadanosS[5000];
  short cantCiudadanosS = 0;

  for (int i=0; i<cantCiudadanos; i++) {
    if(ciudadanos[i].sexo == sexo) {
      ciudadanosS[cantCiudadanosS].nombre = ciudadanos[i].nombre;
      ciudadanosS[cantCiudadanosS].apellido = ciudadanos[i].apellido;
      ciudadanosS[cantCiudadanosS].direccion = ciudadanos[i].direccion;
      ciudadanosS[cantCiudadanosS].tipoDocumento = ciudadanos[i].tipoDocumento;
      ciudadanosS[cantCiudadanosS].nroDocumento = ciudadanos[i].nroDocumento;
      ciudadanosS[cantCiudadanosS].fechaNacimiento = ciudadanos[i].fechaNacimiento;
      ciudadanosS[cantCiudadanosS].sexo = ciudadanos[i].sexo;

      cantCiudadanosS++;
    }
  }
  mostrarRegistro(ciudadanosS, cantCiudadanosS);
}

int main() {
  short MAX = 5000;
  short cantCiudadanos = 0;
  ciudadano ciudadanos[MAX];

  //a)
  cargarCiudadano(ciudadanos, cantCiudadanos);

  //b)
  mostrarRegistro(ciudadanos, cantCiudadanos);

  //c)
  registroPorSexo(ciudadanos, cantCiudadanos, 'M');

  //d)
  registroPorSexo(ciudadanos, cantCiudadanos, 'F');
  
  return 0;
}
