#include <iostream>

struct Node {
  int num = 0;
  Node* next = nullptr;
};

void insertarAlFinal(Node*& head, Node*& last, int numero) {
  Node* n = new Node; // Nodo nuevo

  n->num = numero; // Inicializado con el numero

  if(head == nullptr) { // Si es el primer nodo asignamos el primero y el ultimo
    head = n;
    last = n;
  } else { // Si no, enlazamos el ultimo con el nuevo. Definimos al nuevo como ultimo
    last->next = n;
    last = n;
  }
}

void insertarAlInicio(Node*& head, int numero) {
  Node* n = new Node; // Nodo nuevo

  n->num = numero; // Inicializado con el numero

  if(head == nullptr) { // Si es el primer nodo asignamos el primero
    head = n;
  } else { // Si no, enlazamos el nuevo al primero. Definimos al nuevo como primero
    n->next = head;
    head = n;
  }
}

void insertarEnOrden(Node*& head, int numero) {
  Node* n = new Node; // Nodo nuevo

  n->num = numero; // Inicializado con el numero

  
  if(head == nullptr || n->num < head->num) { // Si es el primer nodo ó es menor al primer nodo, lo asignamos al principio
    n->next = head;
    head = n;
  } else {
    Node* t = head; // Si no creamos un puntero auxiliar para iterar sobre la lista

    // Verificamos PRIMERO que el siguiente exista (Para no intentar evaluar memoria vacia/basura)
    // Si no existe añadimos n al final
    // Si existe verificamos que el numero del siguiente al actual sea menor a numero
    // Si no lo es agregamos n entre el actual y el siguiente al actual
    while(t->next != nullptr && t->next->num < numero) {
      t = t->next;
    }
    n->next = t->next;
    t->next = n;
  }
}

void mostrarLista(Node*& head) {
  Node* t = head;

  while(t != nullptr) {
    std::cout << "Dato: " << t->num << std::endl;
    t = t->next;
  }
}

int main() {
  Node* head = nullptr;
  Node* last = nullptr;
  int numero = 0;

  do {
    std::cout << "Ingrese un numero entero: ";
    std::cin >> numero;

    if(numero == 0) break;

    //insertarAlInicio(head, numero);
    //insertarAlFinal(head, last, numero);
    insertarEnOrden(head, numero);

  } while(numero != 0);

  mostrarLista(head);
}
