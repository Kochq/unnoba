/*
   Crear una lista circular con los datos de los procesos en ejecución en un sistema operativo, donde cada uno
   consta de: PID (número de proceso), nombre de usuario, segundos que se ejecutó, fecha en que se empezó a
   ejecutar (numérica, formato DDMM). Crear la lista insertando al principio.
 */
#include <iostream>

struct Proceso {
  int pid;
  int segundosEjecutados;
  int fechaInicio;
  std::string nombreUsuario;
};

struct Node {
  Proceso proceso;
  Node* next = nullptr;
};

void insertarNodo(Node*&, Proceso);
void printList(Node*);
int procesoMasLargo(Node*);
void eliminarNodo(Node*&, int fechaEliminar);
bool incrementarSegundos(Node*, int PidInc, int segsInc);
void printRoot(Node*);

int main() {
  Node* head = nullptr;

  for(int i = 0; i<8; i++) {
    Proceso proceso;
    proceso.pid = i;
    proceso.segundosEjecutados = i;
    proceso.fechaInicio = i;
    proceso.nombreUsuario = "Usuario " + std::to_string(i);

    insertarNodo(head, proceso);
  }

  printList(head);

  return 0;
}

void insertarNodo(Node*& head, Proceso proceso) {
  Node* newNode = new Node;
  newNode->proceso = proceso;

  if(head == nullptr) {
    head = newNode;
    newNode->next = head;
    return;
  } 
  else {
    Node* tNode = head;

    while(tNode->next != nullptr && tNode->next != head) {
      tNode = tNode->next;
    } // tNode es el último nodo

    tNode->next = newNode;
    newNode->next = head;
    head = newNode;
  }
}

void printList(Node* head) {
  Node* tNode = head;

  while(tNode->next != nullptr && tNode->next != head) {
    std::cout << tNode->proceso.pid << " ";
    tNode = tNode->next;
  }

  std::cout << tNode->proceso.pid << std::endl;
}

int procesoMasLargo(Node* head) {
  Node* tNode = head;
  int mayorPID = head->proceso.pid;
  int mayorSegundos = head->proceso.segundosEjecutados;

  while(tNode->next != nullptr && tNode->next != head) {
    if(tNode->next->proceso.segundosEjecutados > mayorSegundos) {
      mayorPID = tNode->next->proceso.pid;
      mayorSegundos = tNode->next->proceso.segundosEjecutados;
    }
  }

  return mayorPID;
}

void eliminarNodo(Node*& head, int fechaEliminar) {
  Node* tNode = head;

  if(head->proceso.fechaInicio == fechaEliminar) {
    if(head->next != nullptr) {
      Node* eliminar = head;
      while(tNode->next != nullptr && tNode->next != head) {
        tNode = tNode->next;
      }
      tNode->next = head->next;
      head = head->next;
      delete eliminar;
    }
    else head = nullptr;
  }
  else {
    while(tNode->next != nullptr && tNode->next != head) {
      if(tNode->next->proceso.fechaInicio == fechaEliminar) {
        Node* eliminar = tNode->next;
        tNode->next = tNode->next->next;
        delete eliminar;
        return;
      }
      tNode = tNode->next;
    }
  }
}

bool incrementarSegundos(Node* head, int PidInc, int segsInc) {
  while(head->proceso.pid != PidInc) {
    head = head->next;
  }

  if(head->proceso.pid == PidInc) {
    head->proceso.segundosEjecutados += 2;
    return true;
  }

  return false;
}

void printRoot(Node* head) {
  Node* tNode = head;

  while(tNode->next != nullptr && tNode->next != head) {
    if(tNode->proceso.nombreUsuario == "root") {
      std::cout << tNode->proceso.pid << " ";
    }
    tNode = tNode->next;
  }

  if(tNode->proceso.nombreUsuario == "root") {
    std::cout << tNode->proceso.pid << std::endl;
  }
}
