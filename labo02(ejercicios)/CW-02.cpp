#include <iostream>  //libreria para entra y salida de datos
using namespace std;

//Estructura de registro de datos
struct Staff{
    string StaffName;
    int Dui,Contract,Salary;   
    }cd1,cd2,cd3,cd4,cd5;

//Variables Globales
int SizeLarge,*size,SalaryOverral,i;

//Prototipo de Funciones
void Calculation(int a1,int b2);
void PrintArray(int x);

//Funcion Pricipal
int main(){
 
        //preguntando el tamano del arreglo dinamico
        cout<<"Cuantos empleados desea ingresar?:  ";cin>>SizeLarge;
        size = new int [SizeLarge];

        //ingresando al bucle repetitivo de pedir datos
        for ( i = 0; i < SizeLarge; i++){

        //pidiendo datos al usuario para su registro    
        cout<<"\t"<<endl;
        cout<<"ingrese el nombre completo del empleado:        "<<endl;cin>>cd1.StaffName;
        cout<<"ingrese el numero de dui completo por favor:    "<<endl;cin>>cd2.Dui;
        cout<<"ingrese el ano en que fue contratado por favor: "<<endl;cin>>cd3.Contract;
        cout<<"ingrese el Salario mensual que recibe:          "<<endl;cin>>cd4.Salary;
        
        //llamado a la fucion calculation y pasando los valores para calcular las exigencias del ejercicio 
        Calculation(cd3.Contract,cd4.Salary);
        }  

        //condicion para no mostrar lo que hay adentro de la funcion Printarray hasta que se hayan terminado de 
        //recoger todos los datos
        if ( i == SizeLarge){
        PrintArray(SalaryOverral);
        }

    return 0;
}   
    //declaracion de funcion que calcula el salario devengado de cada persona
    void Calculation(int a1,int b2){
        
        //variable locales
        int year=2020,dif,x;

        //la variable dif calcula los anos trabajados en base a los registros(ano actual - ano de contrato )
        dif=year-a1;
        //luego multiplica ese dato por 12 para conocer los meses que la persona trabajo
        x=12*dif;
        //una vez se obtienen los mese se multplica por el salario de la ersona para hacer una suma total.
        SalaryOverral=x*b2;

}   
    //funcion que imprime el registro
    void PrintArray(int x){

        //bucle que permite mostrar el registro uno por uno
        for ( int j = 0; j < SizeLarge; j++){

        //mostrando los datos al usuario    
        cout<<"mostrando arreglo al usuario"<<endl;     
        cout<<"\t"<<endl;    
        cout<<"Nombre completo del empleado:      "<<cd1.StaffName<<endl;;
        cout<<"Numero de dui completo :           "<<cd2.Dui<<endl;
        cout<<"Ano en que fue contratado  :       "<<cd3.Contract<<endl;
        cout<<"Salario mensual ingresado:         "<<cd4.Salary<<endl;
        cout<<"salario Devengado $$:              "<<x<<endl;
        cout<<"\t"<<endl;
        }
}