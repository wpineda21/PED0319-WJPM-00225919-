#include <iostream>
#include <string>

using namespace std;



void jerigonzaP(string word,int size,int pos);

int main (){

    string word = "";

    cout<<"la palabra : "<<endl;

    getline(cin,word);

    jerigonzaP(word,word.length(),0);

return 0;

}

void jerigonzaP(string word,int size,int pos){

    if(size==pos)
        return;
    else{ 
        if(word[pos]== 'a'||word[pos]=='A'|| 
            word[pos]=='e'||word[pos]=='E'||
            word[pos]=='i'||word[pos]=='I'||            
            word[pos]=='o'||word[pos]=='O'||      
            word[pos]=='u'|| word[pos]=='U'){ 
    
    cout<< word[pos]  <<   "p"   << word[pos];
    cout<<""<<endl;

    }else{
        cout<< word[pos];
        cout<<"";

    jerigonzaP(word, size ,pos+1);

    }
    
}
}