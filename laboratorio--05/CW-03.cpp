#include <iostream>

using namespace std;


struct node{
    int n;
    node* next;

};

int main(){

node*Pstart=NULL;


Pstart= push(Pstart,5);
Pstart= push(Pstart,8);
Pstart= push(Pstart,9);
Pstart= push(Pstart,12);

}

node* push(node* Pstart,int n){

    node* newNode=newNode;
    newNode->n=n;

    newNode->next=Pstart;
    Pstart=newNode;

    return Pstart;

}

node* top(node* Pstart){

    if(!Pstart){
        return NULL;
    }else;
    Pstart->next=NULL;
    return Pstart;

}



