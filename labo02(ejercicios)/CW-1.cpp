#include <iostream>
#include <string>
using namespace std;

struct empleado{
    int edad,salario,anoslaborales;
    string nombre;
};
typedef struct empleado Empleado;

void Hombre();
void Mujer();

int main(){
 int opc;

cout<<"bienvenido al calculo de retiro de edad"<<endl;
cout<<"seleccione un genero"<<endl;
cout<<"1)Hombre..........................."<<endl;
cout<<"2)Mujer............................"<<endl;
cin>>opc;

switch (opc){
case 1: cout<<"A continuacion rellene el siguiente formulario"<<endl;
        Hombre();
    break;
case 2: cout<<"A continuacion rellene el siguiente formulario"<<endl;
        Mujer();
    break;

default:cout<<"lo siento esta opcion no existe"<<endl;
    break;
}
return 0; 
}

void Hombre(){
int cantidadEmpleados = 1;
    Empleado cartera[cantidadEmpleados];
    for (int i = 0; i < cantidadEmpleados; i++) {
        cin.ignore();
        cout << "Nombre de empleado #" << (i+1) << ": ";
        getline(cin, cartera[i].nombre);
        cout << "Salario de empleado:"  << (i+1) << ": ";
        cin >> cartera[i].salario;
        cout << "anos laborados:" << (i+1) << ": ";
        cin >> cartera[i].anoslaborales;
        cout << "Edad de empleado: #" << (i+1) << ": ";
        cin >> cartera[i].edad;
        cin.ignore();
    }   
    for (int i = 0; i < cantidadEmpleados; i++){
        if(cartera[i].edad > 60 && cartera[i].anoslaborales > 25){
        cout << cartera[i].nombre << " esta listo para jubilar" << endl;
         }else{
        cout<<"el empleado no puede jubilarse todavia"<<endl;
    }
    }
}
void Mujer(){
int cantidadEmpleados = 1;
    Empleado cartera[cantidadEmpleados];
    for (int i = 0; i < cantidadEmpleados; i++) {
         cin.ignore();
        cout << "Nombre de empleada #" << (i+1) << ": ";
        getline(cin, cartera[i].nombre);
        cout << "Salario de empleada:"  << (i+1) << ": ";
        cin >> cartera[i].salario;
        cout << "anos laborados:" << (i+1) << ": ";
        cin >> cartera[i].anoslaborales;
        cout << "Edad de empleado: #" << (i+1) << ": ";
        cin >> cartera[i].edad;
        cin.ignore();
    }   
    for (int i = 0; i < cantidadEmpleados; i++){
        if(cartera[i].edad > 55 && cartera[i].anoslaborales > 25){
        cout << cartera[i].nombre << " esta listo para jubilar" << endl;
    }else{

        cout<<"la empleada no puede jubilarse todavia"<<endl;
    }
    }
}