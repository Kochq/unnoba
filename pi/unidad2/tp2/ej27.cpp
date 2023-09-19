#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::ws;

struct concursante {
  string nombre1, nombre2, cancion;
  int numInsc;

  concursante(string n1, string n2, string c, int n) : nombre1(n1), nombre2(n2), cancion(c), numInsc(n) {};
  concursante() : nombre1(""), nombre2(""), cancion(""), numInsc(0) {};
};

struct musica {
  string nombre;
  int duracion; };

void cargaConcursantes(struct concursante *concursantes, short &cantConcursantes);

int main() {
  const short MAX_CONCURSANTES = 40;
  short cantConcursantes = 0;
  concursante concursantes[MAX_CONCURSANTES];

  cargaConcursantes(concursantes, cantConcursantes);


  return 0;
}

//a) mezcla entre el 25 y el 26
void cargaConcursantes(struct concursante *concursantes, short &cantConcursantes) {
  char opcionEmp;

  do {
    string nombre1Temp = ""; string nombre2Temp = ""; string cancionTemp = "";
    int numInscTemp = 0;

    cout << "Ingrese el nombre del primer integrante: ";
    getline(cin>>ws, nombre1Temp);

    cout << "Ingrese el nombre del segundo integrante: ";
    getline(cin>>ws, nombre2Temp);

    cout << "Ingrese el nombre de la cancion de los concursantes: ";
    getline(cin>>ws, cancionTemp);

    cout << "Ingrese el numero de inscripcion: ";
    cin >> numInscTemp;

    if(cantConcursantes == 0) concursantes[0] = concursante(nombre1Temp, nombre2Temp, cancionTemp, numInscTemp);
    else {
      for(short i = 0; i < cantConcursantes; i++){ 
        if(concursantes[i].numInsc > numInscTemp) {
          for(short j = cantConcursantes; j >= i; j--) {
            concursantes[j+1] = concursante(
                concursantes[j].nombre1, 
                concursantes[j].nombre2, 
                concursantes[j].cancion, 
                concursantes[j].numInsc
                );
          }
          concursantes[i] = concursante(nombre1Temp, nombre2Temp, cancionTemp, numInscTemp);
          break;
        }
        else concursantes[cantConcursantes] = concursante(nombre1Temp, nombre2Temp, cancionTemp, numInscTemp);
      }
    }
    cantConcursantes++;
    cout << "Usuario cargado correctamente." << std::endl;
    cout << "¿Desea cargar otro usuario? (S/n)" << std::endl;
    cin >> opcionEmp;
  }while (opcionEmp != 'N' && opcionEmp != 'n');
}

//b)

