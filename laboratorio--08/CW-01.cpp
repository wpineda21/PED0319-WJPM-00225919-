#include <iostream>
using namespace std;


struct  node{
    int n;
    node * left,*right;
};

void InsertInTree(node** tree,int n);
void Inorder(node* pTree);
void Preorder(node* pTree);
void Postorder(node* pTree);


int main(){
    node* pTree=NULL;

    InsertInTree(&pTree,12);
    InsertInTree(&pTree,22);
    InsertInTree(&pTree,8);
    InsertInTree(&pTree,15);
    InsertInTree(&pTree,1);
    InsertInTree(&pTree,0);
    InsertInTree(&pTree,27);

    cout<<"Imprimiendo en Preorder "<<endl;
    Preorder (pTree); cout<<endl<<endl;

    cout<<"Imprimiendo en inorder "<<endl;
    Inorder (pTree); cout<<endl<<endl;

    cout<<"Imprimiendo en Postorder "<<endl;
    Postorder (pTree); cout<<endl<<endl;


    return 0;
}



node* creatleaf(int n){

    node* leaf = new node;
    leaf->n=n;
    leaf->left=NULL;
    leaf->right=NULL;
    return leaf;
}



void InsertInTree(node** tree,int n){
    if(!(tree)){
        *tree=creatleaf(n);
    }else{
        if(n<=(*(*tree)).n)
        InsertInTree(&(*(*tree)).left,n);
        else
        InsertInTree(&(*(*tree)).right,n);
    }
}


void Preorder(node* pTree){
    if(!pTree)
        return ;
    else
    {
        cout<<pTree->n<<"\t";
        Preorder(pTree->left);
        Preorder(pTree->right);  
          
            }
       
}

void Inorder(node* pTree){
    if(!pTree)
        return ;
    else
    {
        Preorder(pTree->left);
        cout<<pTree->n<<"\t";
        Preorder(pTree->right);  
          
       }
       
}


void Postorder(node* pTree){
    if(!pTree)
        return ;
    else
    {
        Preorder(pTree->left);
        cout<<pTree->n<<"\t";
        Preorder(pTree->right);  
          
       }
       
}

