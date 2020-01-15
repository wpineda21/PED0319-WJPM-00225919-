//entrada y salida de consola
#include <iostream>

using namespace std;

bool hasletter(char letter,char*array1,char* array2,int sizeArray);
bool compareArrays(char* array1 ,char* array2,int sizeArray);
void printArray(char* array, int sizeArray);

int main(void){
int size = 0;
char* word;
char* aux;
char saveletter;

cout<<"tamano la palabra"; cin>> size;
word = new char [size];
aux = new char [size];

cout<<"digite la palabra"<<endl;
for (int i = 0; i < size; i++)
{
    cin>>saveletter;
    word[i]=saveletter;
}

for (int i = 0; i < size; i++){
    aux[i]='_';
}

char letter;
int a = size + 3;

cout<<"la palabra contiene"<<size<<" letras""\t"<<endl;

do{
cout<<"turnos restantes""\t"<<a<<"\t"<<"digite una letra:  ";cin>>letter;
 cout<<"digite una letra: " "\t"; cin>>letter;
    if (hasletter (letter,word,aux,size)==true){
        cout<<"la palabra si contiene la letra:     "<<letter<<endl;


    }else{
        a--,
        cout<< "la palabra no contiene la letra:   "<<letter <<endl;

    }
    printArray(aux,size);
    
    if (compareArrays (word,aux,size)==true){
        cout<<"has adivinado la palabra:   "<<endl;
    return 0;

    }


}while(a > 0);

return 0;

}

void printArray(char* array, int sizeArray){
    for (int i = 0; i < sizeArray; i++)
    {

    cout<<array[i]<<"\t";
    }
    

}

bool hasletter(char letter,char*array1,char* array2,int sizeArray){

bool flag = false;
for(int i=0; i < sizeArray; i++){
    for (array1 [i] = 0; i < sizeArray; i++){
        if(array1[i]==letter){
            flag=true;
            array2[i]=letter;
        }
    }
    
return flag;

}
}

bool compareArrays(char* array1 ,char* array2,int sizeArray){
    for (int i = 0; i < sizeArray; i++)
    {
    if (array1[i]!=array2[i])
    {
        return false;
    }
    
    return true;
    }
    
}