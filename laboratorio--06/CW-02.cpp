
#include <iostream>
#include <string>
#include <cctype>

using namespace std;


struct node {    
string product;
float price;
node* next;

};


node* addElement(node* list, string product,float price);
string convertString(string product);
int searchStock(node* list,string product);
void printMenu(void);



int main(void){
int opcion = 0;


string product="";
float price=0;
int option=0;
int auxStock=0;


do{
    printMenu();  cin>> option; cin.ignore();


switch (option)
{
case 1 : cout<<"ingrese datos del producto"<<endl;
        cout<<"nombre : "<<endl;
        cout<<"precio : "<<endl;
    
        product=convertString(product);
        list= addElement(list,product,price);

    break;
case 2: 

    cout<<"ingrese el producto a buscar"<<endl;
    cout<<"producto: \t"<<endl; cin>>product;
    product = convertString(product);

    auxStock= searchStock(list,product);

    (auxStock==0)? cout<<"sin Stock" : cout<<"cantidad en estock \t"<<auxStock;
    break;

case 0: cout<<" saliendo ...."<<endl; 
}
}while (option!=0);


return 0 ;
}

string convertString(string product){
    string aux="";

    for (int i=0; i<product.length();i++)
        aux+=toupper(product[i]);

   return aux;
}

void printMenu(void){
cout<<"MENU PRINCIPAL "<<endl;

cout<<"\t 1.agregar producto "<<endl;
cout<<"\t 2. buscar producto "<<endl;
cout<<"\t 0. salir   "<<endl;

}



node* addElement(node* list, string product,float price){

node* newNode = new node;

new node->price = price;
new node->product=product;
new node->next=NULL;


if(!list)
    list=newNode;
else{
    node* aux=list;
    while (aux->next != NUll)
    aux= aux->next;

aux->next=newNode;
}
return list;

}    

int searchStock(node* list,string product){
    if(!list)
    return 0;
    else{
        if (product.compare)
    }


}


