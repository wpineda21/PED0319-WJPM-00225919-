#include <iostream>
#include <string>
using namespace std;

struct PeopleData{
    string Name,SecondName;
    string Dui;
};typedef PeopleData Data;

struct node
{
    Data datas;
    node* left,* right;
};

void InsertInTree(node** pTree,string word);

int main(){
Data T;

node* pTree=NULL;
    cout<<"por favor ingrese Su Primer nombre:  "<<endl;
    getline(cin,T.Name);
    cout<<"Por favor Ingrese su Primer apellido: "<<endl;
    getline(cin,T.SecondName);
    cout<<"Porfavor ingrese su Dui:   "<<endl;
    getline(cin,T.Dui);
    InsertInTree(&pTree,T.Name);
    InsertInTree(&pTree,T.SecondName);
    InsertInTree(&pTree,T.Dui);
return 0;
}


node* creatleaf(Data datas){

    node* leaf = new node;
    leaf->datas=datas;
    leaf->left=NULL;
    leaf->right=NULL;
    
    return leaf;
}

void InsertInTree(node** pTree,Data datas){
    if(!*pTree)
        *pTree=creatleaf(datas);
    else{
        InsertInTree(&(*(*pTree)).left,datas);

    }
}