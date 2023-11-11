#include <cctype>
#include <iostream>
#include <string>

struct Node {
  std::string nombre;
  Node* next = nullptr;
};

void crearNodo(Node*& head, Node*& last, std::string nombre) {
  Node* n = new Node;
  n->nombre = nombre;

  if(head == nullptr) {
    head = n;
    last = n;
  } else {
    last->next = n;
    last = n;
  }
}

bool buscarLista(Node* head, std::string nombre) {
  Node* t = head;

  while(t != nullptr) {
    if(t->nombre == nombre) return true;
    t = t->next;
  }
  return false;
}

void ingresarAlumnos(std::string nombre, Node*& head, Node*& last) {
  do {
    std::cout << "Ingresa el nombre de un alumno: ";
    getline(std::cin>>std::ws, nombre);

    if(tolower(nombre[0]) != 'x') crearNodo(head, last, nombre);
  }while(tolower(nombre[0] != 'x'));
}

bool eliminarJosefina(Node*& head) {
  Node* t = head;

  if (head->nombre == "Josefina Ortega") {
    Node* nodoABorrar = head;
    head = head->next;
    delete nodoABorrar;
    return true;
  }

  while(t->next != nullptr && t->next->nombre != "Josefina Ortega") {
    t = t->next;
  }
  if (t->next != nullptr) {
    Node* nodoABorrar = t->next;
    t->next = t->next->next;
    delete nodoABorrar;
    return true;
  }
  return false;
}

void mostrarAlumnos(Node* head) {
  while(head != nullptr) {
    std::cout << head->nombre << std::endl;
    head = head->next;
  }
}

int main() {
  Node* head = nullptr;
  Node* last = nullptr;
  std::string nombre;

  ingresarAlumnos(nombre, head, last);

  std::cout << "Busca a un alumno en la lista: ";
  getline(std::cin>>std::ws, nombre);

  if(buscarLista(head, nombre)) std::cout << "LA ENCONTRE" << std::endl;
  else std::cout << "LA PERDIMOS" << std::endl;

  if(eliminarJosefina(head)) std::cout << "Mision cumplida" << std::endl;
  else std::cout << "Mission failed" << std::endl;
  
  mostrarAlumnos(head);
}
