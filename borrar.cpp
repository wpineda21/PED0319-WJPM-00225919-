#include <iostream>
#include <queue>
#include <string>
using namespace std;

enum pan{parmesano,integral,italiano,blanco};
enum veget{tomate,pepino,lechuga,aceitunas};
enum carne{res,pollo,atun,salami};

struct comida{
string nombre;    
pan Tipodepan;
veget vegetales;
carne carnes;
}; typedef comida Comida;

struct cola{
 
 queue<comida>Sub;

}; typedef cola Cola1;
Cola1 colacomida;

struct  colatemporal{

queue<void>temporal;

}; typedef colatemporal temp;



void agregar();
void consultar();
void vertodos();

int main(){
int opcion;
bool seguir = false;

do{
        cout<<"Bienveido a Subway santa tecla"<<endl;
        cout << "\n1) Agregar un pedido\n";
        cout << "2) Consultar el estado actual\n";
        cout << "3) Despachar un pedido\n";
        cout << "4) Ver todos los pedidos\n";
        cout << "5) Total a pagar \n";
        cout << "6) Salir\n";
        cout << "Opcion elegida: ";
        cin >> opcion; cin.ignore();

        switch (opcion){
        case 1:agregar();
        break;
        case 2:consultar();
        case 3:break;
        case 4:vertodos();
default:
    break;
        }
}while(seguir==false);

return 0;
}


void agregar(){
    
    Comida unpan;
    char opt1,opt2,opt3;


    cout<<"Ingrese su apellido por favor "; getline(cin,unpan.nombre);
    cout<<"A contnuacion seleccione un tipo de pan "<<endl;
    cout<<"0-Pan blanco\t, 1-pan italiano\t,2-pan parmesano\n,3-pan integral\t"<<endl;
    cin>>opt1;
    switch(opt1){
            case  0 : unpan.Tipodepan = blanco; break;
            case  1 : unpan.Tipodepan = italiano; break;
            case  2 : unpan.Tipodepan = parmesano; break;
            case  3 : unpan.Tipodepan = integral; break;
       }
    cout<<"A contnuacion seleccione un tipo de Ingrediente "<<endl;
    cout<<"0-tomate\t, 1-pepino \t,2-Lechuga \t,3-aceitunas\t"<<endl;
    cin>>opt1;
     switch(opt2){
            case  0 : unpan.vegetales = tomate; break;
            case  1 : unpan.vegetales = pepino; break;
            case  2 : unpan.vegetales = lechuga; break;
            case  3 : unpan.vegetales = aceitunas; break;
       }
    cout<<"A contnuacion seleccione un tipo de Carne para acompanar "<<endl;
    cout<<"0-Carne de res\t, 1-carne de pollo \t,2-Atun \t,3-salami\t"<<endl;
    cin>>opt1; 
     switch(opt3){
            case  0 : unpan.carnes = res; break;
            case  1 : unpan.carnes = pollo; break;
            case  2 : unpan.carnes = atun; break;
            case  3 : unpan.carnes = salami; break;
       }     
        colacomida.Sub.push(unpan);

}

void consultar(){
        cout<<"pedidos actuales  "<<colacomida.Sub.size()<<endl;
}

void vertodos(){

    // Transfiriendo desde laBendicion.colaPedidos hasta colaTemporal
    while(!colacomida.Sub.empty()){
        Comida unpan = colacomida.Sub.pop();
        
        cout << "Info del pedido: " << unpan.nombre << ", ";
        cout << "tipo de pan: " << unpan.Tipodepan << ", ";
        cout << " vegetales: " << unpan.vegetales << ", ";
        cout << "carne " << unpan.carnes << "\n\n";
    }
    // Transfiriendo desde colaTemporal hasta laBendicion.colaPedidos
    while(temp.empy()){
        T elemento = dequeue(&colaTemporal);
        enqueue(&laBendicion.colaPedidos, elemento);
    }
}
