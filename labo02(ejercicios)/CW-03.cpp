#include <iostream> //libreria para entrada y salida de datos
#include <math.h>   //libreria que permite usar el pow y sqrt para elevar numeros y sacar raicez
using namespace std;


//Declaracion de la Estructura que Registra los Datos
struct ExcersiceData{
int a=0,b=0,c=0;
}cd1,cd2,cd3;


//Declaracion de Prototipo de Funciones
void compare(int a1,int b2,int c3);
void HigherThanCero(int a1,int b2, int u);
void EqualCero(int a1,int b2,int u);


//Funcion Principal
int main(){
    
    //Pidiendo los datos al usuario para rellenar la formula cuadratica
    cout<<"por favor ingrese el polinomio"<< endl;
    cout<<"Por favor ingrese A: "; cin>>cd1.a; cout<<"x^2"<<endl;
    cout<<"Por favor ingrese B: "; cin>>cd2.b; cout<<"x"<<endl;
    cout<<"Por favor ingrese C: "; cin>>cd3.c; cout<<"termino independiente"<<endl;
    compare(cd1.a,cd2.b,cd3.c);
    return 0;
}

//Variable que compara los Datos obetenidos y Calcula el Discriminante para Acceder a las posibles Respuestas
void compare(int a1,int b2,int c3){

    //Variables locales
    int z=0,y=0,u=0;

    //calculando Discriminante B^2-4(a)(c)
    z=pow(b2,2);
    y=4*(a1)*(c3);
    u= z-y;
    
    //Calculando si tiene dos raicez,si tiene una sola raiz, o si la respuesta no existe gracias al Discriminante
    if( u > 0 ){
        
        //si es mayor a cero se llama ala funcion correspondiente(HigherThanCero)
        HigherThanCero(a1, b2, u);
        }if(u == 0){
        
        //Si es Menor a Cero se llama ala funcion Correspondiente(EqualCero)
        EqualCero(a1,b2,u);
        }if(u<0){
        
        //Si es menor a Cero se imprme el siguente resultado (ya que no es posible calcularlo con los reales)
        cout<<"\t"<<endl;
        cout<<" la solucion no existe en los reales :( "<<endl;
        cout<<"\t"<<endl;
    }   
}

//Funcion que es llamada si el Resultado Del Discriminante es Mayor que cero
void HigherThanCero (int a1,int b2,int u){
        
        //declaracio de Variables Locales
        int o=0;
        float j=0,x=0,p=0,f=0;
        double l=0;
        
        //calculando la raiz negativa de la Solucion doble
        j = (-b2 - sqrt(u));
        l = ( j / o);

        //Calculando la raiz positiva de la solucion doble
        x = (-b2 + sqrt(u));
        p = x/o; 
        
        //Parte inferior de La formula cuadratica(2*a)
        o = 2 * a1;

        //mostrando el resultado en pantalla
        cout<<"\t"<<endl;
        cout<<"La primera Raiz es: "<<p<<endl;
        cout<<"La Segunda Raiz es: "<<l<<endl;
        cout<<"\t"<<endl;
}

//Funcion que es llamada si el discriminante es igual a cero
void EqualCero(int a1,int b2,int u){        

        //Variables Locales
        int x;
        float o,p;

        //calculando la raiz equivalente
        x =(-b2 + sqrt(u));
        o = 2*a1;
        p = x/o;    

        //imprimendo la unica Raiz
        cout<<"\t"<<endl;
        cout<<"Las  Raicez son iguales  y es: "<<p<<endl;
        cout<<"\t"<<endl;

}