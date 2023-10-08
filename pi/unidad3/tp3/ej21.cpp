#include <iostream>
#include <string>

enum Raza {
  mago = 1,
  guerrero = 2,
  elfo = 3,
  desconocida = 4,
};

struct Personaje {
  std::string nombre;
  int puntaje;
  Raza raza;
};

struct Node {
  Personaje pj;
  Node* next = nullptr;
};

void mostrarMenu();
Node* addNode(Node*& fin, Node*& nuevo);
void imprimirLista(Node* fin);
Raza verificarRaza(int raza);
void pedirPersonajes(Node*& fin);
void mostrarCaracteristicasRaza(Raza raza);
void buscarPersonajeMostrarRaza(Node* fin, std::string nombre);
void restarPuntosPorRaza(Node* fin, Raza raza, int puntosRestar);

int main() {
  Node* fin = nullptr;
  while (true) {
    mostrarMenu();

    int opcion;
    std::cin >> opcion;

    std::string nombreBuscar;

    switch (opcion) {
      case 1:
        pedirPersonajes(fin);
        break;
      case 2:
        buscarPersonajeMostrarRaza(fin, "Mateo");
        break;
      case 3:
        restarPuntosPorRaza(fin, mago, 15);
        break;
      case 4:
        imprimirLista(fin);
        break;
      case 5:
        std::cout << "Saliendo del programa" << std::endl;
        return 0;
      default:
        std::cout << "Opcion no valida" << std::endl;
    }
  }
}

void mostrarMenu() {
  std::cout << "Menú:" << std::endl;
  std::cout << "1. Cargar personajes" << std::endl;
  std::cout << "2. Mostrar características de la raza de un jugador" << std::endl;
  std::cout << "3. Restar puntaje por raza" << std::endl;
  std::cout << "4. Imprimir jugadores" << std::endl;
  std::cout << "5. Salir" << std::endl;
}

Raza verificarRaza(int raza) {
  switch (raza) {
    case 1:
      return mago;
    case 2:
      return guerrero;
    case 3:
      return elfo;
    default:
      return desconocida;
  }
}

Node* addNode(Node*& fin, Node*& nuevo) {
  if(fin == nullptr) nuevo->next = nuevo;
  else {
    nuevo->next = fin->next;
    fin->next = nuevo;
  }
  return nuevo;
}

void imprimirLista(Node* fin) {
  if(fin != nullptr) {
    Node* tNode = fin->next;
    do {
      std::cout << "===== OTRO PJ =====" << std::endl;
      std::cout << "Nombre: " << tNode->pj.nombre << std::endl;
      std::cout << "Puntaje: " << tNode->pj.puntaje << std::endl;
      std::cout << "Raza: " << tNode->pj.raza << std::endl;
      tNode = tNode->next;
    }while (tNode != fin->next);
  }
}

void pedirPersonajes(Node*& fin) {
  Raza razaTemp = desconocida;
  int raza;

  for(int i = 0; i < 4; i++) {
    Node* nuevo = new Node;
    std::cout << "Ingrese el nombre del personaje: ";
    getline(std::cin>>std::ws, nuevo->pj.nombre);

    std::cout << "Ingrese el puntaje del personaje: ";
    std::cin >> nuevo->pj.puntaje;

    do {
      std::cout << "Ingrese la raza del personaje [1] Mago [2] Guerrero [3] Elfo";
      std::cin >> raza;
      razaTemp = verificarRaza(raza);
      switch(razaTemp) {
        case mago:
          nuevo->pj.raza = mago;
          break;
        case guerrero:
          nuevo->pj.raza = guerrero;
          break;
        case elfo:
          nuevo->pj.raza = elfo;
          break;
        default:
          std::cout << "Raza invalida, intente nuevamente" << std::endl;
          break;
      }
    }while(razaTemp == desconocida);

    fin = addNode(fin, nuevo);
  }
}

void mostrarCaracteristicasRaza(Raza raza) {
  switch (raza) {
    case mago:
      std::cout << "1 punto de sanación por cada 5 de daño recibido" << std::endl;
      break;
    case guerrero:
      std::cout << "20% más de daño infligido" << std::endl;
      break;
    case elfo:
      std::cout << "Capacidad de resucitar a un compañero a cambio de 200 puntos" << std::endl;
      break;
    default:
      std::cout << "Raza desconocida" << std::endl;
  }
}

void buscarPersonajeMostrarRaza(Node* fin, std::string nombre) {
  if(fin != nullptr) {
    Node* tNode = fin->next;
    do {
      if(tNode->pj.nombre == nombre) {
        mostrarCaracteristicasRaza(tNode->pj.raza);
        return;
      }
      tNode = tNode->next;
    }while (tNode != fin->next);
    std::cout << "El usuario no existe" << std::endl;
  }
}

void restarPuntosPorRaza(Node* fin, Raza raza, int puntosRestar) {
  if(fin != nullptr) {
    Node* tNode = fin->next;
    do {
      if(tNode->pj.raza == raza) tNode->pj.puntaje -= puntosRestar;
      tNode = tNode->next;
    }while (tNode != fin->next);
  }
}
