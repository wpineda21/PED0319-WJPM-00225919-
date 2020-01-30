#include <iostream>
#include <string>

using namespace std;


struct pedido{

string remitente,destinatario;
char tipo,modalidad;
int peso;
};



struct cola{
    pedido elemento;
    cola* sig;
};


int main(){

pedido aux;
int opcion=0;

do{

    cout<<"Remitente: "<<endl; getline(cin,aux.remitente);
    cout<<"Destinatario "<<endl; getline(cin,aux.destinatario);
    cout<<"Tipo "<<endl;   cin>>aux.tipo; cin.ignore();
    cout<<"Modalidad"<<endl; cin>>aux.modalidad; cin.ignore();
    cout<<"Peso  "<<endl;   cin>>aux.peso; cin.ignore();

    pInicio=queue(pInicio,aux);
    cout<<"Mas pedidos(1-si,0-,no)\t";cin>>opcion;cin.ignore();
}while(opcion!=0);

cout<<"total por sus pedidos "<<endl;

}


cola* queue(cola* c, pedido elemento){
    cola* nuevo= new cola;
    nuevo->elemento=elemento;
    nuevo->sig=NULL;

if(!c)
    c=nuevo;
else{
    cola* aux=c;
    while(aux->sig)
        aux=aux->sig;
    aux
}
}


float calculartotal(cola* lista){
    if (!lista)
        return 0;
    else{
        float sub=0;
        switch (lista->elemento.tipo){
        
        case 'c':
        case'C':
        switch (lista->elemento.modalidad){
           case 'u':
           case 'U':
               sub=3;
               break;
           case 'n':
           case 'N':
                sub=1;
            case 'I':
           case 'I':
                sub=2;
           default:
               break;
           }
        
            break;
        
        switch (lista->elemento.modalidad){
           case 'u':
           case 'U':
               sub=3;
               break;
           case 'n':
           case 'N':
                sub=1;
            case 'I':
           case 'I':
                sub=2;
           default:
               break;
           }
        
            break;











        default:
            break;
        }


    }
}






