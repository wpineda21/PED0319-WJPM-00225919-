#include <iostream>
#include <string>
using namespace std;

// Definicion del registro Libro ----------------

enum generos{ciencia_ficcion,aventura,policial,romance,misterio};

struct Libro{
    int isbn;
    string titulo;
    string autor;
    generos genero;
    bool espanol;
};

// Funciones propias de los Libros ----------------

Libro solicitarDato(){
    Libro p;
    
    //---Solicitar ISBN, Titulo y Autor---
    cout << "ISBN: "; cin >> p.isbn; cin.ignore();
    cout << "Titulo: "; getline(cin, p.titulo);
    cout << "Autor: "; getline(cin, p.autor);
    
    //---Solicitar genero del libro---
    bool continuar = true;
    do{
        char opcion = 0;
        cout << "Genero (c-ciencia|a-aventura|p-policial|r-romance|m-misterio): ";
        cin >> opcion;
        switch(opcion){
            case 'c': p.genero = ciencia_ficcion; continuar = false; break;
            case 'a': p.genero = aventura; continuar = false; break;
            case 'p': p.genero = policial; continuar = false; break;
            case 'r': p.genero = romance; continuar = false; break;
            case 'm': p.genero = misterio; continuar = false; break;
            default: cout << "Opcion erronea!" << endl; break;
        }
    }while(continuar);
    
    //---Solicitar idioma del libro---
    continuar = true;
    do{
        char letra = 0;
        cout << "Espanol (s/n): ";
        cin >> letra;
        switch(letra){
            case 's': 
            case 'S': p.espanol = true; continuar = false; break;
            case 'n': 
            case 'N': p.espanol = false; continuar = false; break;
            default: cout << "Opcion erronea!" << endl; break;
        }
    }while(continuar);
    
    //---Devolver libro ya poblado---
    return p;
}

void mostrarDato(Libro p){
    cout << "ISBN: " << p.isbn << endl;
    cout << "Titulo: " << p.titulo << endl;
    cout << "Autor: " << p.autor << endl;
    
    cout << "Genero: ";
    switch(p.genero){
        case ciencia_ficcion: cout << "Ciencia ficcion" << endl; break;
        case aventura: cout << "Aventura" << endl; break;
        case policial: cout << "Policial" << endl; break;
        case romance: cout << "Romance" << endl; break;
        case misterio: cout << "Misterio" << endl; break;
    }
    
    cout << "Idioma: " << (p.espanol ? "Espanol" : "Otro") << "\n\n";
}

bool comparar(Libro a, Libro b){
    return (a.isbn == b.isbn) && (a.titulo==b.titulo) &&
        (a.autor==b.autor) && (a.genero==b.genero) && 
        (a.espanol==b.espanol);
}

// Definicion de la lista simplemente enlazada ----------------
typedef Libro T;
const T noValido = {-1,{""},{""},misterio,false};

struct Nodo{
    T dato;
    struct Nodo *sig;
};
Nodo *pInicio;

// Prototipos de funciones de la lista ----------------
int cantidadDatos();
void insertarInicio(T p);
void insertarFinal(T p);
void insertarDespuesDe(T p);
void insertarAntesDe(T p);
void agregar();
void mostrar();
void eliminar();
void buscar();
void invertir(Nodo** nodoInicio);
void vaciar(Nodo** nodoInicio);
int contarOcurrencias();
T acceder();

// Programa principal ----------------
int main(){
    cout << "Inicializando..." << endl;
    pInicio = NULL;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar\t2) Mostrar todos\n";
        cout << "\t3) Eliminar\t4) Buscar\n";
        cout << "\t5) Invertir\t6) Vaciar\n";
        cout << "\t7) Cantidad\t8) Contar ocurrencias\n";
        cout << "\t9) Acceder\t10) Salir\n";
        cout << "\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: agregar(); break;
            case 2: mostrar(); break;
            case 3: eliminar(); break;
            case 4: buscar(); break;
            case 5: invertir(&pInicio); break;
            case 6: vaciar(&pInicio); break;
            case 7: cout << "Hay " << cantidadDatos() << " datos.\n"; break;
            case 8: cout << "Esta " << contarOcurrencias() << " veces.\n"; break;
            case 9: acceder(); break;
            case 10: continuar = false; break;
            default: cout << "Opcion erronea!" << endl; break;
        }
    }while(continuar);

    return 0;
}

// Implementacion de funciones de la lista ----------------

int cantidadDatos() {
    Nodo *s = pInicio;

    int contador = 0;
    while (s != NULL) {
        s = s->sig;
        contador++;
    }
    
    return contador;
}

void insertarInicio(T p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = pInicio;
    
    pInicio = nuevo;
}

void insertarFinal(T p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = NULL;
    
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void insertarDespuesDe(T p) {
    cout << "Dato de referencia: ";
    T ref = solicitarDato();
    
    Nodo *s = pInicio;
    
    while(s != NULL && !comparar(s->dato, ref))
        s = s->sig;
    if(s == NULL){
        cout << "Dato de referencia NO existe" << endl;
        return;
    }
    
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = s->sig;
    
    s->sig = nuevo;
    cout << "Dato insertado con exito" << endl;
}

void insertarAntesDe(T p) {
    cout << "Dato de referencia: ";
    T ref = solicitarDato();
    
    Nodo *s = pInicio, *q = NULL;
    
    while(s != NULL && !comparar(s->dato, ref)){
        q = s;
        s = s->sig;
    }
    if(s == NULL){
        cout << "Dato de referencia NO existe" << endl;
        return;
    }
    
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = s;
    
    if(q == NULL)
        pInicio = nuevo;
    else
        q->sig = nuevo;
    cout << "Dato insertado con exito" << endl;
}

void agregar(){
    T p = solicitarDato();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n";
        cout << "\t2) Al final\n";
        cout << "\t3) Despues de\n";
        cout << "\t4) Antes de\n";
        cout << "\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: insertarInicio(p); continuar = false; break;
            case 2: insertarFinal(p); continuar = false; break;
            case 3: insertarDespuesDe(p); continuar = false; break;
            case 4: insertarAntesDe(p); continuar = false; break;
            default: cout << "Opcion erronea!" << endl; break;
        }
    }while(continuar);
}

void mostrar() {
    Nodo *s = pInicio;

    while (s != NULL) {
        mostrarDato(s->dato);
        s = s->sig;
    }
}

void eliminar(){
    cout << "Dato a eliminar: ";
    T ref = solicitarDato();
    
    Nodo *p = pInicio, *q = NULL;
    
    while(p != NULL && !comparar(p->dato, ref)){
        q = p;
        p = p->sig;
    }
    if(p == NULL){
        cout << "Dato a borrar NO existe" << endl;
        return;
    }
    if(q == NULL)
        pInicio = p->sig;
    else
        q->sig = p->sig;
    delete(p);
    cout << "Dato borrado!" << endl;
}

void buscar() {
    cout << "Dato a buscar: ";
    T ref = solicitarDato();
    
    Nodo *s = pInicio;

    while(s != NULL && !comparar(s->dato, ref))
        s = s->sig;
    
    //Si s!=NULL entonces el elemento SI se encuentra
    //Si s==NULL entonces el elemento NO se encuentra
    if(s != NULL)
        cout << "El dato SI se encuentra" << endl;
    else
        cout << "El dato NO se encuentra" << endl;
}

void invertir(Nodo** nodoInicio){
    Nodo* result = NULL;
    Nodo* current = *nodoInicio;
    Nodo* next;
    
    while(current != NULL){
        next = current->sig;
        
        current->sig = result;
        result = current;
        
        current = next;
    }
    *nodoInicio = result;
}

void vaciar(Nodo** nodoInicio){
    Nodo* current = *nodoInicio;
    Nodo* next;
    
    while(current != NULL){
        next = current->sig;
        delete(current);
        current = next;
    }
    *nodoInicio = NULL;
}

int contarOcurrencias(){
    cout << "Dato de referencia: ";
    T ref = solicitarDato();

    Nodo* current = pInicio;
    int contador = 0;
    
    while(current != NULL){
        if(comparar(current->dato, ref)) contador++;
        current = current->sig;
    }
    return contador;
}

T acceder() {
    int indice = 0;
    cout << "Indice a acceder: ";
    cin >> indice; cin.ignore();
    
    if(indice>=0 && indice<cantidadDatos()){
        Nodo *s = pInicio;
        for (int i = 0; i < indice; i++) {
            s = s->sig;
        }
        mostrarDato(s->dato);
        return s->dato;
    }
    else{
        cout << "Error, indice no valido\n";
        return noValido;
    }
}


/*
#include <iostream>
using namespace std;

// Estructura de la lista
struct node{
    int n;
    node* sig;
};

node* agregar(node* pInicio, int n);
node* insertarDesorden(node* pInicio, int n);
int buscarPosicion(node* pInicio, int n);
void imprimir(node* lista);


int main(void){
    // Puntero al inicio de la lista
    node* pInicio = NULL;

    // Agregando datos a la lista de manera ordenada
    pInicio = agregar(pInicio, 5);
    pInicio = agregar(pInicio, 9);
    pInicio = agregar(pInicio, 18);
    pInicio = agregar(pInicio, 21);

    // Agregando elementos a la lista desordenados
    pInicio = insertarDesorden(pInicio, 2);
    imprimir(pInicio); cout << endl << endl;
    pInicio = insertarDesorden(pInicio, 10);
    imprimir(pInicio); cout << endl << endl;
    pInicio = insertarDesorden(pInicio, 100);
    imprimir(pInicio); cout << endl << endl;
    pInicio = insertarDesorden(pInicio, 10);
    imprimir(pInicio); cout << endl << endl;
    pInicio = insertarDesorden(pInicio, 99);
    imprimir(pInicio); cout << endl << endl;

    return 0;
}

// Impresion recursiva de la lista
void imprimir(node* lista){
    if(lista){
        cout << lista->n << "\t";
        imprimir(lista->sig);
    }
}

// Agregar elementos a la lista (en forma de cola)
node* agregar(node* pInicio, int n){
    node* nuevo = new node;
    nuevo->n = n;
    nuevo->sig = NULL;

    if(!pInicio)
        pInicio = nuevo;
    else{
        node* aux = pInicio;

        while(aux->sig)
            aux = aux->sig;

        aux->sig = nuevo;
    }

    return pInicio;
}

// Busca la posicion en la cual debe insertarse el elemento en orden ascendente, devuelve el numero de la posicion
int buscarPosicion(node* pInicio, int n){
    node* aux = pInicio;
    int pos = 0;

    // Recorre la lista y aumenta el valor de pos si el numero acutal es menor, si es mayor no
    while(aux){
        if(n > aux->n)
            pos++;

        // Cambia de posicion en la lista
        aux = aux->sig;
    }
    return pos;
}

// Modifica y añade el elemento pasado por argumento en la lista
node* insertarDesorden(node* pInicio, int n){
    // Posicion en la que se inserta
    int pos = buscarPosicion(pInicio, n);

    // Creacion del nodo a insertar, asignando el numero en su campo de informacion
    node* nuevo = new node;
    nuevo->n = n;

    // Declaracion de nodos auxiliares, iran con diferencia de un nodo
    node* aux = pInicio;
    node* aux2 = pInicio;

    // Ciclo para llegar hasta la posicion en la que se debe insertar
    for(int i = 0; i < pos; i++){
        // En aux2 se guarda el nodo en pos - 1, y en aux el nodo en pos
        aux2 = aux;
        aux = aux->sig;
    }

    // Si el nodo a insertar debe estar al inicio de la lista
    if(pos == 0){
        // El enlace del nuevo nodo a insertar apunta a aux, aux contiene la lista entera
        nuevo->sig = aux;

        // Se hace que aux ahora apunte a nuevo, ya que contiene el nuevo nodo + la lista completa
        aux = nuevo;

        // Se iguala pInicio con aux para que pInicio siempre apunte al inicio de la lista
        pInicio = aux;
    }
    // Si el nodo a insertar debe estar entre dos nodos, o al final de la lista
    else{
        // aux2 al ser el nodo anterior a la posicion donde se debe insertar, su siguiente corresponde al nuevo
        aux2->sig = nuevo;

        // El siguiente del nuevo nodo sera lo restante de la lista, almacenado en aux
        nuevo->sig = aux;
    }

    // Se retorna pInicio para que se almacene la modificacion de la lista
    return pInicio;
} 
*/
