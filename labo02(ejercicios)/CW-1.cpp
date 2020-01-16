#include <iostream>    //libreria para entrada y salida de datos     
#include <string>     //libreria para uso de palabras largas
using namespace std;

//declaracion de  registro de variables
struct employees{
    int Age,Salary,WorkingYears;
    string employeesName;
};

//usando typedef
typedef struct employees Staff;

//prototipos de variables
void Man();
void Woman();


//funcion principal
int main(){

    int option;

    cout<<"bienvenido al calculo de retiro de edad"<<endl;
    cout<<"seleccione un genero"                   <<endl;
    cout<<"1)Hombre..............................."<<endl;
    cout<<"2)Mujer................................"<<endl;
    cin>>option;

    //menu para escoger el genero de la persona a evaluar
    switch (option){
        case 1: cout<<"A continuacion rellene el siguiente formulario"<<endl;
        //llamando a la funcion man
        
        Man();break;   

        case 2: cout<<"A continuacion rellene el siguiente formulario"<<endl;
        
        //llamando ala funcion woman
        Woman();break;

        //default por si algo falla o la opcion ingresada no existe    
        default:cout<<"lo siento esta opcion no existe"<<endl;break;
        
    }
    return 0; 
    
}
//Fucion man que nos permite guardar los registros de las personas
void Man(){

        //declarando el tamano del arreglo
        int Quantityofemployees = 1;
        Staff Data[Quantityofemployees];
        
        //entrando al ciclo for del arreglo
        for (int i = 0; i < Quantityofemployees; i++) {

        //funcion que me permite ignorar los "Enter" digitados antes de llegar aqui
        cin.ignore();
            
        //preguntando al usuario los datos necesarios
        cout << "Nombre de empleado #"  << (i+1) << ": ";   getline(cin, Data[i].employeesName);
        cout << "Salario de empleado:"  << (i+1) << ": ";   cin >> Data[i].Salary;
        cout << "anos laborados:"       << (i+1) << ": ";   cin >> Data[i].WorkingYears;
        cout << "Edad de empleado: #"   << (i+1) << ": ";   cin >> Data[i].Age;
        cin.ignore();
    }   
    
        //entrando a un bucle que imprime si la persona esta lista para jubilarse o no
        for (int i = 0; i < Quantityofemployees; i++){

        //imponiendo la condicion (en este caso de edad) dentro del bucle
        if (Data[i].Age > 60 && Data[i].WorkingYears > 25){
        cout << Data[i].employeesName<< " esta listo para jubilar" << endl;
         }else{
        cout<<"el empleado no puede jubilarse todavia"<<endl;
         }
        }
    }

//Declaracion de la funcion Mujer que me permite guardar los datos de las personas  mujeres   
void Woman(){
    
        int Quantityofemployees = 1;
        Staff Data[Quantityofemployees];

        //entrando al bucle de obtencion de datos del usuario
         for (int i = 0; i < Quantityofemployees; i++) {
        cin.ignore();
        cout << "Nombre de empleada #"  << (i+1) << ": ";       getline(cin, Data[i].employeesName);
        cout << "Salario de empleada:"  << (i+1) << ": ";       cin >> Data[i].Salary;
        cout << "anos laborados:"       << (i+1) << ": ";       cin >> Data[i].WorkingYears;
        cout << "Edad de empleado: #"   << (i+1) << ": ";       cin >> Data[i].Age;
        cin.ignore();
    }   

        //bucle que imprime si la persona esta lista para jubilarse
        for (int i = 0; i < Quantityofemployees; i++){
      
        if(Data[i].Age > 55 && Data[i].WorkingYears > 25){
        cout << Data[i].employeesName << " esta listo para jubilar" << endl;
        }else{
        cout<<"la empleada no puede jubilarse todavia"<<endl;
        }
    }
}