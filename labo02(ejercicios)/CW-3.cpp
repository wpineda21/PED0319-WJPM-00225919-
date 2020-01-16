#include <iostream>
using namespace std;

struct Empleados{
 string nombre;
 int dui,contrato,salario,calculos;   

}cd1,cd2,cd3,cd4,cd5;

int tamano;
int *size;

void calculos(int a1,int b2);

int main(){

    
cout<<"Cuantos empleados desea ingresar?:  ";cin>>tamano;

 size = new int [tamano];

for (int i = 0; i < tamano; i++){
    cout<<"ingrese el nombre completo del empleado:    "<<endl;cin>>cd1.nombre;
    cout<<"ingrese el numero de dui completo por favor:    "<<endl;cin>>cd2.dui;
    cout<<"ingrese el ano en que fue contratado por favor:   "<<endl;cin>>cd3.contrato;
    cout<<"ingrese el Salario mensual que recibe:     "<<endl;cin>>cd4.salario;
    calculos(cd3.contrato,cd4.salario);
}

    return 0;
}

void calculos(int a1,int b2){

int year=2020,dif,x,saltotal;

dif=year-a1;

x=12*dif;

saltotal=x*b2;


}