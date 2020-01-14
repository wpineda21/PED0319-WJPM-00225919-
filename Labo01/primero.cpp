#include <iostream>
using namespace std;

//prototipo de funcion
void Primenumber();

//funcion principal
int main(){
Primenumber(); //llamado de funcion prime
return 0;
}

//funcion de suman de numeros pares
void Primenumber(){

//declarando variables   
int sum=0,i=0,j=0;

//for que reccorre los numeros del 1 al 100 (excluyendo al 1 por que no es considerado primo)
for ( i = 2; i <= 100; i++){

//for que "compara" el residuo del modulo entre el i y j para sacar los numeros primos 
    for (  j = 2; i % j != 0  ; j++);

//condicion que permite sumar los numeros primos
    if ( j == i) {
     sum +=  i ;    
    }
}
//mostrando suma total
cout<<" la suma de los numeros primos es " << sum <<endl; 
}