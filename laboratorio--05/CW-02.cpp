#include <iostream>
#include <string>

using namespace std;


struct  node
{
 string content,address;
 int weight;
 node* next;


};

typedef node* st;


void push(st* pSt,string content,string address,float weight);


int main(){
    st pSt;
    int option = 0 ;

    do{
        cout<<"Peso:  "; cin>>aux.weight; cin.ignore();
        cout<<"Contenido: "; getline(cin,aux.content);
        cout<<" Destino:   "; getline(cin,aux.address);

        push(&pSt,content,address,weight);


        cout<<"ingresar mas datos??(1 = si,0 = no \t"; cin>>option;
        cin.ignore();

    }while (option!=0);

    node aux=top(&pSt);

        cout<<"Peso:  "; cin>>aux.weight; cin.ignore();
        cout<<"Contenido: "; getline(cin,aux.content);
        cout<<" Destino:   "; getline(cin,aux.address);
    aux = pop(&sPt);

return 0;
}

void push(st* pSt,string content,string address,float weight){
    node* newNode = new node;

    newNode->address=address;
    newNode->content=content;
    newNode->weight=weight;

    newNode->next = *pSt;
    *pSt=newNode;

}


node top(st* pSt){
    node aux;    
    if(!(pSt)){
    
        aux.address= "";
        aux.content= "";
        aux.weight= 0 ;
        aux.next=NULL;

    return aux;
    }else{
        aux.address=((*pSt)->address);
        aux.content=((*pSt)->content);
        aux.weight=((*pSt)->weight);
        aux.next=NULL;
        (*pSt)=(*pSt)->next;
    }
}



node pop(st* pSt){
    node aux;    
    if(!(pSt)){
    
        aux.address= "";
        aux.content= "";
        aux.weight= 0 ;

    return aux;
    }else{
        aux.address=((*pSt)->address);
        aux.content=((*pSt)->content);
        aux.weight=((*pSt)->weight);
        aux.next=NULL;

    }
}


bool empty(!push){


}




