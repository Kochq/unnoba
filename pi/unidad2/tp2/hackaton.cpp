/*Desafío: “Batalla Naval”.
Escribir un programa en C++ que permita simular el juego “Batalla Naval” y mantenga el puntaje obtenido por los jugadores.
El juego reúne las siguientes características:
1 único tablero de 5 filas y 5 columnas.
10 barcos, donde cada uno ocupa un lugar en el tablero y en dicha posición sólo podrá colocar un único barco.
1 usuario que ubicará los barcos en el tablero.
Habrá un máximo de 10 jugadores.
Cada jugador tendrá 5 oportunidades para descubrir barcos, indicando para ello en qué fila y columna creé que se encuentran.
Cada barco encontrado, suma un punto al jugador.
Al finalizar el programa arrojará un mensaje con la cantidad de barcos que encontró cada jugador.
Almacenar el nombre del jugador junto con el puntaje obtenido.

Módulos a implementar:
Inicializar tablero: un usuario deberá ubicar en el tablero los 10 barcos.
Iniciar partida: realizar el módulo para que cada jugador pueda ingresar su nombre y las 5 ubicaciones donde cree que están los barcos dentro del tablero. La carga finaliza cuando se ingresa “zzz” como nombre del jugador, o se alcanzó el máximo de 10 jugadores.
Reporte 1: informar  el nombre y el puntaje obtenido por cada jugador.
Reporte 2: informar el jugador que obtuvo mayor puntaje, con un mensaje similar a “Felicitaciones xxxxxx, obtuviste # puntos. ¡Sos el ganador!”. Donde xxxxxx el nombre del jugador y # el puntaje obtenido.

Importante: el programa deberá ofrecer un menú de opciones, como Interfaz Gráfica de Usuario. Pensar en todas las posibles validaciones que puedan presentarse e implementar mecanismos que las verifiquen.

Documentación:

Resolución con asistencia en línea: dejar comentarios completos y detallados en la comparativa explícita, entre los algoritmos extraídos de fuentes externas y la versión modificada por ustedes. 
Resolución desenchufada: dejar comentarios completos y detallados para explicar la solución algorítmica propuesta.
Medio de entrega de la actividad
La actividad se entrega en la tarea "Entrega Hackatón U2 - Comisión 3 Junín", disponible en la sección "Hackatón 2023", apartado "Unidad 2". */

#include <iostream>
#include <string>

using namespace std;


struct jugador {
  string nombre;
  int puntaje = 0; 
  int oportunidades = 5;
};
const int MAXJUGADORES = 5;

struct jugada {
  int fila, columna;
};

// Funcion que devuelve true si la casilla que intenta ingresar el usuario esta libre
bool casillaLibre(const int fila, const int columna, bool tablero[5][5]) {
  // Verificamos que no haya un barco en la posicion que intenta ingresar
  if(tablero[fila][columna] == false) return true; 
  else return false;
}

// Funcion que devuelve true si la casilla que intenta ingresar el usuario es un lugar valido
bool casillaEnRango(const int fila, const int columna, bool tablero[5][5]) {
  // Verificamos que se ingreso un valor dentro del tablero
  if (fila < 0 || fila > 4 || columna < 0 || columna > 4) return false;
  else return true;
}

/* Esta funcion verifica que los datos ingresados por el usuarios sean validos dentro de los requerimientos del programa
 La funcion devolvera "true" la posicion ingresada esta libre y el usuario ingreso los datos correctos */
void llenarTablero(int &fila, int &columna, bool tablero[5][5]) {
  // Variable que determina si la posicion esta ocupada o no
  bool libre = false;
  // Variable que determina si la posicion esta en rango del tablero o no
  bool enRango = false;

  do {
    cout << "Ingrese la fila (0-4) donde quiere colocar el barco: ";
    cin >> fila;
    cout << "Ingrese la columna (0-4) donde quiere colocar el barco: ";
    cin >> columna;

    enRango = casillaEnRango(fila, columna, tablero);

    // Si esta en rango verificamos lo demas
    if(enRango) {
      libre = casillaLibre(fila, columna, tablero);
      // Si la casilla esta ocupada
      if(!libre) cout << "Posicion ocupada, ingrese nuevamente" << endl;
    }
    // Si la casilla que intento ingresar esta fuera del tablero
    else cout << "Datos fuera del rango del tablero, intente nuevamente" << endl;
    
    // Se repetira mientras la casilla esta ocupada o fuera de rango
  } while (!libre || !enRango);
}


// Esta funcion pedira al usuario la posicion de 10 barcos en el tablero para iniciar el juego 
void inicializarTablero(bool tablero[5][5], int &cantBarcos) {
  // Fila y columna que ingresara el usuario para completar el tablero
  int fila, columna; 

  do {
    llenarTablero(fila, columna, tablero);
    // Ocupar casilla
    tablero[fila][columna] = true;
    // cantidad de barcos por colocar
    cantBarcos--;

    cout << "Quedan un total de " << cantBarcos << " barcos por colocar" << endl;

    // Mientras que haya que colocar barcos
  } while (cantBarcos != 0);

}

void jugar(int &fila, int &columna, bool tablero[5][5], jugador jugadores[], const int cantJugadores) {
  // Variable que determina si la posicion esta ocupada o no
  bool libre = false;
  // Variable que determina si la posicion esta en rango del tablero o no
  bool enRango = false;

  jugada jugadas[5] = {0,0};

  do {
    do {
      int oportunidades = jugadores[cantJugadores].oportunidades;

      cout << "Ingrese la fila (0-4) donde quiere disparar: ";
      cin >> fila;
      cout << "Ingrese la columna (0-4) donde quiere disparar: ";
      cin >> columna;

      enRango = casillaEnRango(fila, columna, tablero);

      // Si esta en rango verificamos lo demas
      if(enRango) {
        libre = casillaLibre(fila, columna, tablero);

        // Si esta ocupada sumamos al puntaje del jugador
        if(!libre) {
          for(int i = 0; i<5; i++) {
            if(jugadas[i].columna == columna && jugadas[i].fila == fila) cout << "No pegaste :(" << endl;
            else {
              cout << "Pegaste" << endl;
              jugadores[cantJugadores].puntaje++; 
              jugadas[oportunidades].fila = fila;
              jugadas[oportunidades].columna = columna;
            }
          }
        }
        else cout << "No pegaste :(" << endl;
      }
      else cout << "Datos fuera del rango del tablero, intente nuevamente" << endl;

      // Mientras que la casilla no este en rango
    } while (!enRango);

    // Restamos una oportunidad
    jugadores[cantJugadores].oportunidades--;
    cout << "Te quedan " << jugadores[cantJugadores].oportunidades << " oportunidades" << endl;
  }while (jugadores[cantJugadores].oportunidades > 0);

}

void InicializarPartida(jugador jugadores[], int &cantJugadores, bool tablero[5][5]) {
  int fila, columna;
  do {
    // Pedimos el nombre del jugador
    cout << "Ingrese el nombre del jugador #" << cantJugadores+1 << " ";
    getline(cin>>ws, jugadores[cantJugadores].nombre);

    if(jugadores[cantJugadores].nombre == "ZZZ") return;

    jugar(fila, columna, tablero, jugadores, cantJugadores);

    cantJugadores++;

    //Salimos si ponemos ZZZ o alcanzamos el maximo de jugadores
  }while (jugadores[cantJugadores].nombre != "ZZZ" && cantJugadores < MAXJUGADORES);

}
void informeFinal(jugador jugadores[], const int cantJugadores) {
  // Recorremos el array e informamos de los puntajes
  for(int i = 0; i < cantJugadores; i++) {
    cout << "Jugador #" << i+1 << endl;
    cout << "Nombre: " << jugadores[i].nombre << endl;
    cout << "Puntuacion: " << jugadores[i].puntaje << endl;
  }
}
void informeGanador(jugador jugadores[], const int cantJugadores) {
  // Suponemos el primer jugador el ganador
  int puntajeMasAlto = jugadores[0].puntaje;
  string ganandor = jugadores[0].nombre;
  
  for(int i = 0; i < cantJugadores; i++) {
    if(jugadores[i].puntaje > puntajeMasAlto) {
      puntajeMasAlto = jugadores[i].puntaje;
      ganandor = jugadores[i].nombre;
    }
  }
  cout << "El ganador es: " << ganandor << endl;
  cout << "Con un puntaje de: " << puntajeMasAlto << endl;
}
void menuOpciones(bool tablero[5][5], int cantBarcos, jugador jugadores[], int cantJugadores) {
  char opcion;
  bool cargado = false;
  do {
    cout << "[1] Cargar tablero" << endl;
    cout << "[2] Jugar batalla naval" << endl;
    cout << "[3] Salir" << endl;

    cin >> opcion;
    
    switch (opcion) {
      case '1': {
        inicializarTablero(tablero, cantBarcos);
        cargado = true;
        break;
      }
      case '2': {
        if(cargado) {
          InicializarPartida(jugadores, cantJugadores, tablero);
          informeFinal(jugadores, cantJugadores);
          informeGanador(jugadores, cantJugadores);
        }
        else cout << "El tablero no esta cargado" << endl;
        break;
      }
      case '3': {
        cout << "Chau";
        break;
      }
      default:
        cout << "Opcion incorrecta" << endl;
        break;
    }

  }while (opcion != '3');
}

int main() {
  //Cantidad de barcos por colocar en el tablero
  int cantBarcos = 5;
  // Tablero de booleanos inicializados en false, false = no ocupado | true = ocupado
  bool tablero[5][5] = {false};
  int cantJugadores = 0;
  jugador jugadores[MAXJUGADORES];

  menuOpciones(tablero, cantBarcos, jugadores, cantJugadores);
}

