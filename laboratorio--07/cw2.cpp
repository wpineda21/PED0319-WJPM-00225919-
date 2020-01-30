#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

enum genero{a,b,c,d};

struct canciones
{
    string titulo,cantante;
    genero gen;
    int duracion;
};

typedef canciones T;


void imprimirmenu(void);
void buscarElemento(vector<T> canciones,queue<T>* cola, string tit);


int main(){
    T aux;
    vector<T>lista;
    queue <T> triste,feliz,dormir;
    
    string tit;
    int opcion = 0,auxEnum=0;
    
    do{

        imprimirmenu(); cin>>opcion; cin.ignore();


        switch (opcion)
        {
        case 1:     cout<<"titulo" <<endl; getline(cin,aux.titulo); 
                    cout<<"cantante"<<endl; getline(cin,aux.cantante);
                    cout<<"Genero  (1-a,2-b,3-c,4-d) \t"<<endl; 
                    cin>>auxEnum; cin.ignore(); auxEnum--;
                    aux.gen=genero(auxEnum);
                    do{
                    cout<<"Duracion"<<endl; cin>>aux.duracion;cin.ignore();
                    }while (aux.duracion<=0);                    
                    
                    lista.push_back(aux);
        case 2: cout<<"Cacion a eliminar "; getline(cin,tit);
                for( auto iter= lista.begin(); iter!= lista.end(); ++iter){
                if (iter->titulo.compare(tit))
                    iter=lista.erase(iter);
                else   
                iter++;
                }   
         break;
         
        case 3: for (T elemento : lista){
            cout<<elemento.cantante<<endl;
            cout<<elemento.titulo<<endl;
            cout<<elemento.duracion<<endl;
            switch (elemento.gen){
            case a: cout<< 'a';
                break;
            case b: cout<< 'b';
            break;
            case c: cout<< 'c';
            break;
            case d: cout<< 'd';
                break;  
            }
        }
        
         break;
        
        case 4: cout<<"cancion a buscar \t";  getline(cin,tit);
                cout<<"Agregar en (1-triste,2-feliz,3-dormir)"<<endl;
                cin>>(auxEnum);

                switch (auxEnum){
                    case 1:
                    buscarElemento(lista,&triste,tit);        break;
                    case 2:
                    buscarElemento(lista,&feliz,tit);
                    break;
                    case 3:
                    buscarElemento(lista,&dormir,tit)
                    break;
                }   
                    break;
        case 0: break;

        }

    }while(opcion!=0);


}


void imprimirmenu(void){

    cout<<"1) agregar cancion  "<<endl;
    cout<<"2) Eliminar cancion "<<endl;
    cout<<"3) Mostrar cancion  "<<endl;
    cout<<"4) buscar cancion   "<<endl;
    cout<<"0) salir            "<<endl;

}

void buscarElemento(vector<T> canciones,queue<T>* cola, string tit){

for(T elemento:canciones){
    if(elemento.titulo.compare(tit)==0){
        cout<<"cancion Encontrada"<<endl;
        (*cola).push(elemento);
    
    return;
    }
}

cout<<" cancion no encontrada "<<endl;

}