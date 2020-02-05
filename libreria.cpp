#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Articulo{
    string nombre;
    int peso;
    float precio;
};
vector<Articulo> bodega;

bool compNombre(Articulo a, Articulo b){
    return a.nombre < b.nombre;
}
bool compPeso(Articulo a, Articulo b){
    return a.peso < b.peso;
}
bool compPrecio(Articulo a, Articulo b){
    return a.precio < b.precio;
}

void agregar(), buscar(), eliminar(), mostrar(), ordenar();

int main(){
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\n1) Agregar articulos a la bodega.\n";
        cout << "2) Buscar articulos.\n";
        cout << "3) Eliminar articulos.\n";
        cout << "4) Mostrar todo lo que contenga la bodega.\n";
        cout << "5) Ordenar.\n";
        cout << "6) Salir.\n";
        cout << "Opcion: ";
        cin >> opcion; cin.ignore();
        
        switch(opcion){
            case 1: agregar(); break;
            case 2: buscar(); break;
            case 3: eliminar(); break;
            case 4: mostrar(); break;
            case 5: ordenar(); break;
            case 6: continuar = false;
            default: cout << "Opcion no valida.\n"; break;
        }
    }while(continuar);

    return 0;
}

void agregar(){
    Articulo unArticulo;
    cout << "Nombre: "; getline(cin, unArticulo.nombre);
    cout << "Peso: "; cin >> unArticulo.peso; cin.ignore();
    cout << "Precio: "; cin >> unArticulo.precio; cin.ignore();
    bodega.insert(bodega.end(), unArticulo);
    cout << "Articulo ingresado exitosamente!\n";
}
void buscar(){
    string unNombre;
    cout << "Nombre del articulo que buscar: ";
    getline(cin, unNombre);
    
    bool encontrado = false;
    for (int i = 0; i < bodega.size(); i++) {
        if(bodega[i].nombre == unNombre){
            encontrado = true;
            break;
        }
    }
    
    if(encontrado)
        cout << "Articulo si se encuentra en la bodega.\n";
    else
        cout << "Articulo no se encuentra en la bodega.\n";
}
void eliminar(){
    string unNombre;
    cout << "Nombre del articulo que buscar: ";
    getline(cin, unNombre);
    
    for(auto iter = bodega.begin(); iter != bodega.end(); ++iter){
        if(iter->nombre == unNombre){
            iter = bodega.erase(iter);
            cout << "Articulo eliminado exitosamente.\n";
            break;
        }
    }
}
void mostrar(){
    for (int i = 0; i < bodega.size(); i++) {
        cout << bodega[i].nombre << " pesa " << bodega[i].peso;
        cout << " gramos y vale $" << bodega[i].precio << "\n";
    }
}
void ordenar(){
    int opcion = 0;
    cout << "Criterio de ordenamiento:\n";
    cout << "1) Alfabetico\n";
    cout << "2) Peso\n3)Precio\n";
    cout << "Opcion: ";
    cin >> opcion; cin.ignore();
    
    if(opcion == 1)
        sort(bodega.begin(), bodega.end(), compNombre);
    else if(opcion == 2)
        sort(bodega.begin(), bodega.end(), compPeso);
    else if(opcion == 3)
        sort(bodega.begin(), bodega.end(), compPrecio);
        
    cout << "Bodega ordenada exitosamente\n";
}

/*
#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Inicializar con cero casillas
    vector<int> vector01;
    // Inicializar con valores predeterminados
    vector<float> vector02 = {1.2, 4.5, 6.6, 8.9, 10};
    
    // Recorrer - acceder a los elementos
    cout << "Contenido vector02: ";
    for (int i = 0; i < vector02.size(); i++) {
        cout << vector02[i] << "  ";
    }
    
    // Insertar al inicio
    vector01.insert(vector01.begin(), 3);
    vector01.insert(vector01.begin(), 2);
    vector01.insert(vector01.begin(), 9);
    
    vector02.insert(vector02.begin(), 5.5);
    vector02.insert(vector02.begin(), 7.6);
    
    // Insertar al final
    vector01.insert(vector01.end(), 0);
    vector01.insert(vector01.end(), 1);
    
    vector02.insert(vector02.end(), 3.14);
    
    // Recorrer - acceder a los elementos
    cout << "\nContenido vector01: ";
    for (int i = 0; i < vector01.size(); i++)
        cout << vector01[i] << "  ";
    
    cout << "\nContenido vector02: ";
    for (int i = 0; i < vector02.size(); i++)
        cout << vector02[i] << "  ";

    return 0;
}

*/


/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Persona{
    string nombre;
    int edad;
};

bool compEdad(Persona a, Persona b){
    return a.edad < b.edad;
}

int main(){
    vector<Persona> estudiantes;
    
    char letra = 's';
    while(letra == 's'){
        Persona unaPersona;
        cout << "Nombre: "; getline(cin, unaPersona.nombre);
        cout << "Edad: "; cin >> unaPersona.edad; cin.ignore();
        estudiantes.insert(estudiantes.end(), unaPersona);
        
        cout << "\nDesea agregar alguien mas? (s/n): ";
        cin >> letra; cin.ignore();
    }
    
    // Ordenando estudiantes por edad
    sort(estudiantes.begin(), estudiantes.end(), compEdad);
    
    // Mostrando estudiantes ya ordenados
    for (int i = 0; i < estudiantes.size(); i++) {
        cout << estudiantes[i].nombre << " tiene ";
        cout << estudiantes[i].edad << " anios.\n";
    }

    return 0;
}
*/
