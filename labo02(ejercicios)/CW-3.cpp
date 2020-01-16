#include <iostream>
using namespace std;

struct Empleados{
 string nombre;
 int dui,contrato,salario;   
}cd1,cd2,cd3,cd4,cd5;

int tamano;
int *size;
int saltotal;
int i;
void calculos(int a1,int b2);
void mostrandoarreglo(int x);

int main(){
 
cout<<"Cuantos empleados desea ingresar?:  ";cin>>tamano;

 size = new int [tamano];

for ( i = 0; i < tamano; i++){
    cout<<"\t"<<endl;
    cout<<"ingrese el nombre completo del empleado:        "<<endl;cin>>cd1.nombre;
    cout<<"ingrese el numero de dui completo por favor:    "<<endl;cin>>cd2.dui;
    cout<<"ingrese el ano en que fue contratado por favor: "<<endl;cin>>cd3.contrato;
    cout<<"ingrese el Salario mensual que recibe:          "<<endl;cin>>cd4.salario;
    calculos(cd3.contrato,cd4.salario);
     }if ( i == tamano){
       mostrandoarreglo(saltotal);

}

    return 0;
}

void calculos(int a1,int b2){

int year=2020,dif,x;

dif=year-a1;
x=12*dif;
saltotal=x*b2;

}

void mostrandoarreglo(int x){

    for ( int j = 0; j < tamano; j++){
    
    cout<<"mostrando arreglo al usuario"<<endl;    
    cout<<"\t"<<endl;    
    cout<<"Nombre completo del empleado:      "<<cd1.nombre<<endl;;
    cout<<"Numero de dui completo :           "<<cd2.dui<<endl;
    cout<<"Ano en que fue contratado  :       "<<cd3.contrato<<endl;
    cout<<"Salario mensual ingresado:         "<<cd4.salario<<endl;
    cout<<"salario Devengado :                "<<x<<endl;
    cout<<"\t"<<endl;

    }
}