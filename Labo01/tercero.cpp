#include <iostream>
#include <ctype.h>// me permite usar la funcion isalpha y isdigit que compara numeros y caracteres
#include <string.h>//permite usar las funciones strlen

using namespace std;

//prototipo de funciones
int Validationletter(char Chain[]);
int Validationnumber(char Chain[]);
int AlphaNumeric();

//arreglo de caracter global
char Chain[50];

int main(){

//obteniendo la frase a comparar
cout<<"Ingrese una Frase de inspiracion"<<endl;
cin.getline(Chain,50,'\n');

//llamdo a la funcion de validacion de letra a ala funcion main(principal)
Validationletter(Chain);

return 0;
}

//funcion que permite compara el contenido de la variable chain con la longitud de sus caracteres
int Validationletter(char Chain[]){
    for(int i=0; i<strlen( Chain); i++){

    //comparando el contenido de la variable para saber si son caracteres solamente 
    //si esto es diferente de cero se manda llamar ala funcion de validacion de numeros
    if(!(isalpha(Chain[i]))){
        
    //llamando la funcion de validacion de numeros    
    Validationnumber(Chain);
    }
    else{
    cout<<" Frase de solo Caracteres "<<endl;

    
}                
}
 return -1;   
}

//funcion que compara lo del contenido chain para saber si son solo numeros
int Validationnumber(char Chain[]){

    for(int i=0; i<strlen( Chain); i++){

    //comparando los digitos para saber si son numeros solamente  
    if(!(isdigit(Chain[i]))){

    //mesnaje de confirmacion    
    cout<<" Son Solo Numeros";
        
}
return 1;
}
}
