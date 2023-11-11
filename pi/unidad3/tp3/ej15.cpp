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

void addNode(Node*& head, MovilData datos) {
  if(head == nullptr) {
    Node* newNode = new Node;
    newNode->datos = datos;
    head = newNode;
  }
  else {
    // Si el es primero
    if(head->datos.patente >= datos.patente) {
      Node* newNode = new Node;
      newNode->datos = datos;
      
      if(head->datos.patente > datos.patente || head->datos.sensor > datos.sensor) {
        newNode->next = head;
        head = newNode;
      } else { // head->datos.patente == datos.patente && head->datos.sensor < datos.sensor
        newNode->next = head->next;
        head->next = newNode;
      }
      return;
    }

    Node* tNode = head;
    Node* nextNode = tNode->next;

    // Buscamos a partir del siguiente
    while(nextNode != nullptr && nextNode->datos.patente < datos.patente) {
      tNode = tNode->next;
      nextNode = tNode->next;
    }

    if(nextNode != nullptr && nextNode->datos.patente == datos.patente) { // Encontramos una patente igual
      Node* newNode = new Node;
      newNode->datos = datos;

      if(nextNode->datos.sensor > datos.sensor) {
        newNode->next = nextNode;
        tNode->next = newNode;
      } else {
        newNode->next = nextNode->next;
        nextNode->next = newNode;
      }
      return;
    } 
    else if(nextNode == nullptr) {
      Node* newNode = new Node;
      newNode->datos = datos;

      tNode->next = newNode;
      return;
    }   
    else if(nextNode->datos.patente > datos.patente) {
      Node* newNode = new Node;
      newNode->datos = datos;

      newNode->next = nextNode;
      tNode->next = newNode;
      return;
    }
  }
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

int main() {
  Node* head = nullptr;

  while(true) {
    MovilData tDatos;

    std::cout << "Patente: " << std::endl;
    std::cin >> tDatos.patente;
    if(tDatos.patente == "aaa99") break;
    std::cout << "Sensor (1 - Sur, 2 - Medio, 3 - Norte): " << std::endl;
    std::cin >> tDatos.sensor;
    std::cout << "Velocidad: " << std::endl;
    std::cin >> tDatos.velocidad;

    addNode(head, tDatos);
  }

  printLista(head);
}
