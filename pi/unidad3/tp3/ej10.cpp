#include <iostream>
#include <string>

struct Node {
  std::string dato;
  Node* next = nullptr;
};

void addNodo(Node*& head, const std::string cadena);
std::string minimizar(const std::string& cadena);
void pedirDatos(Node*& head);
void moverNodo(Node* antNode, Node* movNode, Node*& newList); // Saca un nodo de la lista y lo mete en otra
void listaRepetida(Node*& headTodas, Node*& headRepetidas);
void mostrarLista(Node* head);

int main() {
  Node* head = nullptr;
  Node* headRepetidas = nullptr;

  pedirDatos(head);

  std::cout << "Lista1: " << std::endl;
  mostrarLista(head);
  listaRepetida(head, headRepetidas);
  std::cout << "Lista2: " << std::endl;
  mostrarLista(headRepetidas);

  return 0;
}

void addNodo(Node*& head, const std::string cadena) {
  Node* n = new Node;
  n->dato = cadena;

  if(head == nullptr) head = n;
  else {
    n->next = head;
    head = n;
  }
}

std::string minimizar(const std::string& cadena) {
  std::string cadenaMin = "";
  for(char c : cadena) cadenaMin += tolower(c);
  return cadenaMin;
}

void pedirDatos(Node*& head) {
  for(short i = 0; i <= 5; i++) {
    std::string cadena = "";

    std::cout << "Ingrese una cadena de texto: ";
    getline(std::cin>>std::ws, cadena);
    cadena = minimizar(cadena);

    addNodo(head, cadena);
  }
}

void moverNodo(Node* antNode, Node* movNode, Node*& newList) { // Saca un nodo de la lista y lo mete en otra
  Node* tMovNode = antNode->next; 

  if(newList == nullptr) {
    newList = movNode;

    // Retiramos nodo de la lista anterior
    if(movNode->next != nullptr) antNode->next = movNode->next;
    else antNode->next = nullptr;

    // Desenlazamos de la lista anterior
    tMovNode->next = nullptr;
  } 
  else {
    // Retiramos nodo de la lista anterior
    if(movNode->next != nullptr) antNode->next = movNode->next;
    else antNode->next = nullptr;

    Node* tNode = newList;
    while(tNode != nullptr) { // Iteramos para saber donde meter el nuevo nodo
      if(tNode->next == nullptr) {
        tNode->next = tMovNode; // Enlazamos nuevo nodo
        tMovNode->next = nullptr; // Desenlazamos de la lista anterior
      }
      else tNode = tNode->next;
    }
  }
}

// Esto crea otra lista con todas las palabras repetidas
// En esta lista las palabras que se repiten en la otra se repiten la misma cantidad de veces, 
// la consigna no dice que eso este mal
void listaRepetida(Node*& headTodas, Node*& headRepetidas) {
  std::string datoBuscado = headTodas->dato;
  Node* tNode = new Node;

  while (headTodas != nullptr) {
    datoBuscado = headTodas->dato;
    tNode = headTodas;
    while(tNode != nullptr && tNode->next != nullptr) {
      if(tNode->next->dato == datoBuscado) moverNodo(tNode, tNode->next, headRepetidas);
      else tNode = tNode->next;
    }
    headTodas = headTodas->next;
  }
}

void mostrarLista(Node* head) {
  while(head != nullptr) {
    std::cout << "Dato: " << head->dato << std::endl;
    head = head->next;
  }
}
