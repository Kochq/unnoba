#include <iostream>
#include <string>

enum sensores {
  sur = 1,
  medio = 2,
  norte = 3
};

struct MovilData {
  std::string patente;
  int velocidad;
  sensores sensor;
};

struct Node {
  MovilData datos;
  Node* next = nullptr;
};

void addNode(Node*& head, Node*& newNode); // Añadimos un nodo antes de head
void addNode(Node*& antNode, Node*& nextNode, Node*& newNode); // Añadimos el nodo entre antNode y nextNode
void generarLista(Node*& head, MovilData datos); // Generamos una lista segun los criterios del ejercicio
void crearListaSensor(Node* head, Node*& headSens, sensores sensor); // Crear una lista nueva segun el sensor
void printLista(Node* head);

int main() {
  Node* head = nullptr;

  while(true) {
    MovilData tDatos;
    int tSensor;

    std::cout << "Patente: " << std::endl;
    std::cin >> tDatos.patente;
    if(tDatos.patente == "aaa99") break;
    std::cout << "Sensor (1 - Sur, 2 - Medio, 3 - Norte): " << std::endl;
    std::cin >> tSensor;

    if (tSensor < 1 || tSensor > 3) {
      std::cout << "Ingrese un valor valido para el sensor" << std::endl;
      return 1;
    }
    tDatos.sensor = static_cast<sensores>(tSensor);

    std::cout << "Velocidad: " << std::endl;
    std::cin >> tDatos.velocidad;

    generarLista(head, tDatos);
  }

  printLista(head);

  Node* sens1 = nullptr;
  Node* sens2 = nullptr;
  Node* sens3 = nullptr;

  crearListaSensor(head, sens1, sur);
  crearListaSensor(head, sens2, medio);
  crearListaSensor(head, sens3, norte);

  std::cout << "======================" << std::endl;
  printLista(sens1);
  std::cout << "======================" << std::endl;
  printLista(sens2);
  std::cout << "======================" << std::endl;
  printLista(sens3);
}

void addNode(Node*& head, Node*& newNode) { // Añadimos un nodo antes de head
  newNode->next = head;
  head = newNode;
}

void addNode(Node*& antNode, Node*& nextNode, Node*& newNode) { // Añadimos el nodo entre antNode y nextNode
  newNode->next = nextNode;
  antNode->next = newNode;
}

void generarLista(Node*& head, MovilData datos) {
  Node* newNode = new Node;
  newNode->datos = datos;

  // Primero comprobamos que el primero no sea
  if(head == nullptr || head->datos.patente > datos.patente || head->datos.sensor > datos.sensor) {
    addNode(head, newNode);
    return;
  } 
  else if(head->datos.patente == datos.patente) { // sabemos que head->datos.sensor < datos.sensor
    addNode(head->next, newNode);
    return;
  }

  Node* tNode = head;
  Node* nextNode = tNode->next;

  while(nextNode != nullptr && nextNode->datos.patente < datos.patente) { // Buscamos donde meter el nuevo nodo
    tNode = tNode->next;
    nextNode = tNode->next;
  }

  if(nextNode != nullptr && nextNode->datos.patente == datos.patente) { // Encontramos una patente igual
    if(nextNode->datos.sensor > datos.sensor) addNode(tNode, tNode->next, newNode); // Insertamos segun el sensor
    else addNode(nextNode->next, newNode);
  } 
  else if(nextNode != nullptr && nextNode->datos.patente > datos.patente) { // Insertamos antes de la que encontramos
    addNode(tNode, tNode->next, newNode);
  }   
  else tNode->next = newNode; // Insertamos al final si no encontramos nada
}

void printLista(Node* head) {
  while(head != nullptr) {
    std::cout << std::endl;
    std::cout << "Patente: " << head->datos.patente << std::endl;
    std::cout << "Sensor: " << head->datos.sensor << std::endl;
    std::cout << "velocidad: " << head->datos.velocidad << std::endl;

    head = head->next;
  }
}

void crearListaSensor(Node* head, Node*& headSens, sensores sensor) {
  while(head != nullptr) {
    if(head->datos.sensor == sensor) generarLista(headSens, head->datos);
    head = head->next;
  }
}
