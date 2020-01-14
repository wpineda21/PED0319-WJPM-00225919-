//incluyendo librerias
#include <iostream>
#include <cstdlib>// libreria que me permite el uso de la libreria time.h
#include <time.h>//libreria que permite el uso del Srand y rand
#include <stdio.h>

using namespace std;

//prototipo de funciones
void  Displayarray(int p[]);

int main(){

  // Declaraciond de arreglo  
  int RandomArray[15];     
  
  //llamando ala funcion de numeros aleatorios
  srand(time(0));          
  for(int i = 0; i <15 ;  i ++)     

  //declaracion de numeros aleatorios dentro del arreglo
  RandomArray[i] = 1 + rand() % (76 - 1);     
  
  Displayarray(RandomArray);
  return 0; 
}

//funcion para mostrar los numeros dentro del arreglo
void  Displayarray(int p[]) {   
         for(int i = 0; i < 15; i ++)
            cout<<p[i]<<" ";
}