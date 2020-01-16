#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

struct ExcersiceData{
int a=0,b=0,c=0;
}cd1,cd2,cd3;

void compara(int a1,int b2,int c3);
void mayor (int a1,int b2, int u);
void igual(int a1,int b2,int u);

int main(){

    cout<<"por favor ingrese el polinomio"<< endl;
    cout<<"Por favor ingrese A: "; cin>>cd1.a; cout<<"x^2"<<endl;
    cout<<"Por favor ingrese B: "; cin>>cd2.b; cout<<"x"<<endl;
    cout<<"Por favor ingrese C: "; cin>>cd3.c; cout<<"termino independiente"<<endl;
    compara(cd1.a,cd2.b,cd3.c);
    return 0;
}

void compara(int a1,int b2,int c3){

int z=0,y=0,u=0;

    z=pow(b2,2);
    y=4*(a1)*(c3);
    u= z-y;
  
    if( u > 0 ){
        mayor(a1, b2, u);
    }if(u == 0){
        igual(a1,b2,u);
    }if(u<0){
        cout<<"\t"<<endl;
        cout<<" la solucion no existe en los reales :( "<<endl;
        cout<<"\t"<<endl;
    }   
}

void mayor (int a1,int b2,int u){
int o=0;
float j=0,x=0,p=0,f=0;
double l=0;

j = (-b2 - sqrt(u));
l =( j / o);
x =(-b2 + sqrt(u));
o = 2*a1;
p = x/o; 
cout<<"\t"<<endl;
cout<<"La primera Raiz es: "<<p<<endl;
cout<<"La Segunda Raiz es: "<<l<<endl;
cout<<"\t"<<endl;
}
void igual(int a1,int b2,int u){
int x;
float o,p;

x =(-b2 + sqrt(u));
o = 2*a1;
p = x/o; 
cout<<"\t"<<endl;
cout<<"Las  Raicez son iguales  y es: "<<p<<endl;
cout<<"\t"<<endl;

}