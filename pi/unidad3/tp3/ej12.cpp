#include <iostream>
#include <string>

struct Node {
  float precio = 0;
  int codigo = 0, stock = 0;
  std::string descripcion = "";
  Node* next = nullptr;
};

void addNode(Node*& head, Node*& newNode);
void pedirDatos(Node*& head);
void imprimirLista(Node* head);
void incrementarPrecios(Node* head, float porcentaje);
bool incrementarStock(Node* head, int codigo, int stockAumentar);
void eliminarNodo(Node*& nodoAnt, Node*& nodoEliminar);
void eliminarNoStock(Node*& head);

int main() {
  Node* head = nullptr;
  float porcentaje;
  int codigoAumentar, stockAumentar;

  pedirDatos(head);
  imprimirLista(head);

  std::cout << "Por cuanto quiere incrementar los precios? (%): ";
  std::cin >> porcentaje;
  incrementarPrecios(head, porcentaje);
  std::cout << "Asi ha quedado la lista luego de aumentar los precios:" << std::endl;
  imprimirLista(head);

  std::cout << "A que producto quiere aumentarle el stock?: ";
  std::cin >> codigoAumentar;
  std::cout << "Cuanto quiere aumentarlos?: ";
  std::cin >> stockAumentar;
  bool incrementado = incrementarStock(head, codigoAumentar, stockAumentar);
  if(incrementado) {
    std::cout << "Stock incrementado satisfactoriamente, asi ha quedado la lista:" << std::endl;
    imprimirLista(head);
  } else std::cout << "No existe el producto con el codigo ingresado" << std::endl;

  std::cout << std::endl << "Limpiando productos con 0 stock..." << std::endl;
  eliminarNoStock(head);
  std::cout << "Eliminador correctamente" << std::endl;
  imprimirLista(head);
}

void addNode(Node*& head, Node*& newNode) {
  if(head == nullptr) head = newNode;
  else {
    newNode->next = head;
    head = newNode;
  }
}

void pedirDatos(Node*& head) {
  while(true) {
    Node* newNode = new Node;
    std::cout << "Ingrese el codigo del producto: ";
    std::cin >> newNode->codigo;
    if(newNode->codigo == -1) {
      break;
    }

    std::cout << "Ingrese el precio por producto: ";
    std::cin >> newNode->precio;

    std::cout << "Ingrese el stock del producto: ";
    std::cin >> newNode->stock;

    std::cout << "Ingrese la descripcion del producto: ";
    getline(std::cin>>std::ws, newNode->descripcion);

    addNode(head, newNode);
  }
}

void imprimirLista(Node* head) {
  Node* t = head;
  while(t != nullptr) {
    std::cout << "===== Nuevo Item =====" << std::endl;
    std::cout << "Codigo: " << t->codigo << std::endl;
    std::cout << "Precio: " << t->precio << std::endl;
    std::cout << "Stock: " << t->stock << std::endl;
    std::cout << "Descripcion: " << t->descripcion << std::endl;
    t = t->next;
  }
}

void incrementarPrecios(Node* head, float porcentaje) {
  Node* tNode = head;

  while(tNode != nullptr) {
    tNode->precio += (tNode->precio / 100) * porcentaje;
    tNode = tNode->next;
  }
}

bool incrementarStock(Node* head, int codigo, int stockAumentar) {
  Node* tNode = head;

  while(tNode != nullptr) {
    if(tNode->codigo == codigo) {
      tNode->stock += stockAumentar;
      return true;
    }
    tNode = tNode->next;
  }

  return false;
}

void eliminarNodo(Node*& nodoAnt, Node*& nodoEliminar) {
  if(nodoEliminar->next == nullptr) {
    nodoAnt->next = nullptr;
    delete nodoEliminar;
  } else {
    nodoAnt = nodoEliminar->next;
    delete nodoEliminar;
  }
}

void eliminarNoStock(Node*& head) {
  Node* tNode = head;

  while(head->stock == 0) {
    head = head->next;
  }tNode = head;

  while(tNode != nullptr && tNode->next != nullptr) {
    if(tNode->next->stock == 0) eliminarNodo(tNode, tNode->next);
    else tNode = tNode->next;
  }
}
