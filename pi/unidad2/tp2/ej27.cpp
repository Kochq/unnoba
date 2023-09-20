#include <cctype>
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::ws;
using std::tolower;
using std::toupper;

struct concursante {
  string nombre1, nombre2, cancion;
  int numInsc;
};

struct musica {
  string titulo;
  int duracion; 
};

string formatearCancion(string cancion);
void cargaConcursantes(concursante concursantes[], short &cantConcursantes);
void cargarCanciones(musica canciones[], short &cantCanciones);
void parejasMayorDuracion(concursante concursantes[], short cantConcursantes, musica canciones[], short cantCanciones);
void eliminarCancion(concursante concursantes[], short cantConcursantes, musica canciones[], short &cantCanciones);
void duracionCancion(concursante concursantes[], short cantConcursantes, musica canciones[], short cantCanciones);

int main() {
  const short MAX = 40;
  short cantConcursantes = 0;
  short cantCanciones = 0;
  char opcion;
  musica canciones[MAX];
  concursante concursantes[MAX];

  do {
    cout << "Seleccione una opcion:" << std::endl;
    cout << "[1] : Cargar nuevos concursantes." << std::endl;
    cout << "[2] : Cargar nueva cancion." << std::endl;
    cout << "[3] : Buscar cuantas parejas tienen la cancion mas larga." << std::endl;
    cout << "[4] : Eliminar cancion." << std::endl;
    cout << "[5] : Buscar duracion de la cancion por pareja." << std::endl;
    cout << "[6] : Salir." << std::endl;
    cin >> opcion;

    switch (opcion) {
      case '1':
        cargaConcursantes(concursantes, cantConcursantes);
        break;

      case '2':
        cargarCanciones(canciones, cantCanciones);
        break;

      case '3':
        parejasMayorDuracion(concursantes, cantConcursantes, canciones, cantCanciones);
        break;

      case '4':
        eliminarCancion(concursantes, cantConcursantes, canciones, cantCanciones);
        break;

      case '5':
        duracionCancion(concursantes, cantConcursantes, canciones, cantCanciones);
        break;

      case '6':
        break;
      default:
        cout << "Opcion invalida." << std::endl;
        break;
    }
  }while (opcion != '6');


  return 0;
}

//a) mezcla entre el 25 y el 26
void cargaConcursantes(concursante concursantes[], short &cantConcursantes) {
  char opcionEmp;

  do {
    string nombre1Temp = ""; string nombre2Temp = ""; string cancionTemp = ""; string cancionFTemp = "";
    int numInscTemp = 0;

    cout << "Ingrese el nombre del primer integrante: ";
    getline(cin>>ws, nombre1Temp);

    cout << "Ingrese el nombre del segundo integrante: ";
    getline(cin>>ws, nombre2Temp);

    cout << "Ingrese el nombre de la cancion de los concursantes: ";
    getline(cin>>ws, cancionTemp);

    cout << "Ingrese el numero de inscripcion: ";
    cin >> numInscTemp;

    cancionFTemp = formatearCancion(cancionTemp);

    if(cantConcursantes == 0) concursantes[0] = {nombre1Temp, nombre2Temp, cancionFTemp, numInscTemp};
    else {
      for(short i = 0; i < cantConcursantes; i++){ 
        if(concursantes[i].numInsc > numInscTemp) {
          for(short j = cantConcursantes; j >= i; j--) {
            concursantes[j+1] = {
              concursantes[j].nombre1, 
              concursantes[j].nombre2, 
              concursantes[j].cancion, 
              concursantes[j].numInsc
            };
          }
          concursantes[i] = {nombre1Temp, nombre2Temp, cancionFTemp, numInscTemp};
          break;
        }
        else concursantes[cantConcursantes] = {nombre1Temp, nombre2Temp, cancionFTemp, numInscTemp}; 
      }
    }
    cantConcursantes++;
    cout << "Usuario cargado correctamente." << std::endl;
    cout << "¿Desea cargar otro usuario? (S/n)" << std::endl;
    cin >> opcionEmp;
  }while (opcionEmp != 'N' && opcionEmp != 'n');
}

//b)
void cargarCanciones(musica canciones[], short &cantCanciones) {
  char opcionEmp;

  do {
    string tituloTemp = "";
    int duracionTemp = 0;

    cout << "Ingrese el titulo de la cancion: ";
    getline(cin>>ws, tituloTemp);

    cout << "Ingrese cuanto dura la cancion en segundos: ";
    cin >> canciones[cantCanciones].duracion;

    canciones[cantCanciones].titulo = formatearCancion(tituloTemp);

    cantCanciones++;
    cout << "Cancion cargada correctamente." << std::endl;
    cout << "¿Desea cargar otra cancion? (S/n)" << std::endl;
    cin >> opcionEmp;
  }while (opcionEmp != 'N' && opcionEmp != 'n');
}

string formatearCancion(string cancion) {
  string cancionF = "";
  for(int i = 0; i < cancion.length(); i++) {
    if (i == 0) cancionF += toupper(cancion[i]);
    else cancionF += tolower(cancion[i]);
  }
  return cancionF;
}

//e)
void duracionCancion(concursante concursantes[], short cantConcursantes, musica canciones[], short cantCanciones) {
  int parejaBuscada, tiempoEncontrado, duracionCancion;
  cout << "Ingrese el numero de la pareja: ";
  cin >> parejaBuscada;

  for(short i = 0; i < cantConcursantes; i++) {
    if (concursantes[i].numInsc == parejaBuscada) {
      for(short j = 0; j < cantCanciones; j++) {
        if (canciones[j].titulo == concursantes[i].cancion) {
          tiempoEncontrado = canciones[j].duracion;
          cout << "La cancion de la pareja durara un total de " << tiempoEncontrado << " segundos" << std::endl;
          return;
        }
      }
    }
  }

  cout << "No se encontro la cancion" << std::endl;
}

//c) podria usar la funcion de arriba para hacer este punto, pero usaria 3 for en vez de 2... Tambien podria pensar otra forma de hacer la funcion de arriba
void parejasMayorDuracion(concursante concursantes[], short cantConcursantes, musica canciones[], short cantCanciones) {
  int mayor = canciones[0].duracion;
  string tituloMayor = canciones[0].titulo;

  for (short i = 0; i < cantCanciones; i++) {
    if(canciones[i].duracion > mayor) {
      mayor = canciones[i].duracion;
      tituloMayor = canciones[i].titulo;
    }
  }

  cout << "La cancion mas larga es " << tituloMayor << " con una duracion de " << mayor << " segundos." << std::endl;
  cout << "Las parejas que usaran esta cancion son: " << std::endl;

  for (short i = 0; i < cantConcursantes; i++) {
    if(concursantes[i].cancion == tituloMayor) {
      cout << "[*] " << concursantes[i].numInsc << std::endl;
    }
  }
}

void eliminarCancion(concursante concursantes[], short cantConcursantes, musica canciones[], short &cantCanciones) {
  string cancionEliminar;
  cout << "Ingrese la cancion a eliminar: ";
  getline(cin>>ws, cancionEliminar);

  for(short i = 0; i < cantConcursantes; i++) {
    if(concursantes[i].cancion == cancionEliminar) {
      cout << "Imposible eliminar esta cancion, sera utilizada por concursantes" << std::endl;
      return;
    }
  }

  for(short i = 0; i < cantCanciones; i++)  {
    if(canciones[i].titulo == cancionEliminar) {
      for(short j = i; j < cantCanciones; j++) {
        canciones[j].titulo = canciones[j+1].titulo;
        canciones[j].duracion = canciones[j+1].duracion;
      }
      cantCanciones--;
      cout << "Cancion eliminada correctamente!" << std::endl;
      return;
    }
  }
  cout << "Cancion no encontrada." << std::endl;
}
