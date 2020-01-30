#include <iostream>

using namespace std;

struct node{
    
    int n;
    bool flag;
    node* next;
};

int main(){



}


node* queue(node* list,int n){

node* newNode= new node;

new node->n=n;
new node->flag=true;
new node->next=NULL;

if (!list){

    list=newNode;
}else{

    newNode->flag=false;   
    node* aux=list;

    while(aux->next)
    aux=aux->next;

    aux->next=list;
    print(list,0);


    return 0;

}

void print(node* list,int n){
    if(i==1 && list->n == n){
        return 0;
    }
    else{
        cout<<list->n<<endl;
        print(list->next,1,n)
    }


}




}