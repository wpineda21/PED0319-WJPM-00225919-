#include <iostream>
#include <string>
using namespace std;


struct node
{
    string word;
    node* left,* right;
};

void InsertInTree(node** pTree,string word);


int main(){
node* pTree=NULL;

    InsertInTree(&pTree,"Hola");
    InsertInTree(&pTree,"Pupusas");
    InsertInTree(&pTree,"codigo");
    InsertInTree(&pTree,"Adios");
    InsertInTree(&pTree,"F");
return 0;
}


node* creatleaf(string word){

    node* leaf = new node;
    leaf->word=word;
    leaf->left=NULL;
    leaf->right=NULL;
    
    return leaf;
}

void InsertInTree(node** pTree,string word){
    if(!*pTree)
        *pTree=creatleaf(word);
    else{
        if (word.compare((*(*pTree)).word)<=0);
        InsertInTree(&(*(*pTree)).left,word);

    }
    

}