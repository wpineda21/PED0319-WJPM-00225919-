#include <iostream> //libreria para usar la entrada de datos
#include <cmath>    //libreria para usar funciones matematicas


using namespace std;

//declarando prototipo de funciones
int reverse (int x);


//funcion principal
int main(){
int a;
    //pidiendo numero a invertir
    cout<<"ingrese un numero mayor a 10"<<endl;
    cin>>a;
    //llamada de funcion pincipal
    cout<<reverse(a)<<endl;
}


//declaracion funcion recursiva que revertira los numeros
int reverse (int x) {
    int aux=x,cont=-1;
    float pot;
   
    while (aux>=1){ //para que no haya limite de numeros naturales
    aux=aux/10;
    cont=cont+1;
    }
   
    pot=pow(10,cont);
    if (x < 10) {       //caso base 
    return x;
    }
    else {
    return (x % 10)*pot + reverse (x / 10) ; //llamada de funcion
    }
}