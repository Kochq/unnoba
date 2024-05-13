# TAD Listas enlazadas

## Igualdad observacional
Si tenemos dos lista enlazadas A y B, estas van a ser iguales cuando tengan la misma cantidad de elementos y todos sus 
elementos iguales en el mismo lugar.

## Parametro formal
a

## Genero
Lista enlazada<a>

## Observadores basicos
* tamano() -> int
* buscarElemento(a elemento) -> a
* buscarIndice(int indice) -> int

## Generadores
* vacio() -> ListaEnlazada(a)
    - {Pos: retorna una lista vacia}
* aPartirDe(Secuencia<a>) -> ListaEnlazada(a)
    - {Pos: retorna una lista con los elementos de la secuencia}

## Otras operaciones
* agregar(a elemento) -> void
    - {Pos: El elemento estara}
* eliminar(a elemento) -> void
    - {Pre: El elemento debe estar}
    - {Pos: El elemento no va a estar}
* eliminarTodo() -> void
    - {Pre: La lista debe tener al menos un elemento}
    - {Pos: La lista quedara vacia}
* OrdenarCreciente() -> void
    - {Pre: La lista debe tener al menos un elemento}
    - {Pos: La lista quedara ordenada creciente}
* OrdenarDeCreciente() -> void
    - {Pre: La lista debe tener al menos un elemento}
    - {Pos: La lista quedara ordenada decreciente}

## Usa
Int, secuencia<a>

## Exporta
ListaEnlazada<a>, vacio, apartirde, agregar, eliminar, eliminarTodo, buscarElemento, buscarIndice, OrdenarCreciente, 
ordenarDeCrecient, tamano... Todo

# TAD Pila

## Igualdad observacional
Si tenemos dos Pilas A y B, estas van a ser iguales cuando tengan la misma cantidad de elementos y todos sus 
elementos iguales en el mismo lugar.

## Parametro formal
a

## Genero
Pila<a>

## Observadores basicos
* tamano() -> int
* top() -> a
    - {Pre: La pila debe tener al menos un elemento}
* esVacia() -> bool

## Generadores
* vacio() -> Pila(a)
    - {Pos: retorna una Pila vacia}
* aPartirDe(Secuencia<a>) -> Pila(a)
    - {Pos: retorna una Pila con los elementos de la secuencia}

## Otras operaciones
* apilar(a elemento) -> void
    - {Pos: El elemento estara apilado}
* desapilar() -> void
    - {Pre: La pila no debe estar vacia}
    - {Pos: La pila va a tener ese elemento desapilado}

## Usa
Int, secuencia<a>, bool

## Exporta
Pila<a>, tamano, top, esVacia, vacio, aPartirDe, apilar, desapilar

# TAD Cola

## Igualdad observacional
Si tenemos dos Colas A y B, estas van a ser iguales cuando tengan la misma cantidad de elementos y todos sus 
elementos iguales en el mismo lugar.

## Parametro formal
a

## Genero
Cola<a>

## Observadores basicos
* tamano() -> int
* esVacia() -> bool
* inicio() -> a
    - {Pre: La Cola no debe estar vacia}
* final() -> a
    - {Pre: La Cola no debe estar vacia}

## Generadores
* vacio() -> Cola(a)
    - {Pos: retorna una Cola vacia}
* aPartirDe(Secuencia<a>) -> Cola(a)
    - {Pos: retorna una Cola con los elementos de la secuencia}

## Otras operaciones
* encolar(a elemento) -> void
    - {Pos: El elemento estara encolado}
* desEncolar() -> void
    - {Pre: La Cola no debe estar vacia}
    - {Pos: La Cola va a tener ese elemento desencolado}

## Usa
Int, secuencia<a>, bool

## Exporta
Cola<a>, tamano, esVacia, vacio, aPartirDe, encolar, desEncolar

# TAD Deque

## Igualdad observacional
Si tenemos dos Deques A y B, estas van a ser iguales cuando tengan la misma cantidad de elementos y todos sus 
elementos iguales en el mismo lugar.

## Parametro formal
a

## Genero
Deque<a>

## Observadores basicos
* tamano() -> int
* esVacia() -> bool
* inicio() -> a
    - {Pre: La Deque no debe estar vacia}
* final() -> a
    - {Pre: La Deque no debe estar vacia}

## Generadores
* vacio() -> Deque(a)
    - {Pos: retorna una Deque vacia}
* aPartirDe(Secuencia<a>) -> Deque(a)
    - {Pos: retorna una Deque con los elementos de la secuencia}

## Otras operaciones
* insertarAlFrente(a elemento) -> void
    - {Pos: El elemento estara insertado al frente}
* insertarAlFinal(a elemento) -> void
    - {Pos: El elemento estara insertado al final}
* eliminarAlFrente() -> void
    - {Pre: La Deque no debe estar vacia}
    - {Pos: La Deque va a tener ese elemento eliminado al frente}
* eliminarAlFinal() -> void
    - {Pre: La Deque no debe estar vacia}
    - {Pos: La Deque va a tener ese elemento eliminado al final}

## Usa
Int, secuencia<a>, bool

## Exporta
Deque<a>, tamano, esVacia, vacio, aPartirDe, encolar, desEncolar
