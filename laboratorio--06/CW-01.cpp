#include <iostream>

using namespace std;


struct node{
    int number;
    node* next;

};

node* addStack(node* list,int n);
node* addQueue(node* list,int n);
void printElements(node* list);
void countnumbers(node*list,int n);

int main(){

    node* pStart=NULL;

    pStart=addStack(pStart,8);
    pStart=addStack(pStart,5);
    pStart=addStack(pStart,10);
 
    return 0;
}


node* addStack(node* list,int n){

    node* newNode= new node;
    newNode->number=n;

    newNode->next=list;
    
    list=newNode;

return list;

}

node* addQueue(node* list,int n){

    node* newNode= new node;
    
    newNode->number=n;

    if (!list)
    list=newNode;
    else{

        node* aux=list;

    while (!aux->next)
       aux=aux->next;
    
        aux->next=newNode;
    
    }

    return list;

}


void printElements(node* list){
    
    if(!list)
        return;
    else{
        cout<<list->next<<endl;
        printElements(list->next);
    }
}

void countnumbers(node*list,int n){
    if(!list)
        return 0;
    else{
        
        if(list->number==n)
            return 1 + countnumbers(!list->next,n);
        
        else 

        return 0 + countnumbers(list->next,n);
    }

}





























































































































































































