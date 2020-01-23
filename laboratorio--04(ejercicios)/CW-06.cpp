#include <iostream> //libreria que permite el uso de entrada de datos
#include <string>  //libreria para guardar los registros tipo string
using namespace std;

//declaracion de la estructura que pide los datos al usuario
struct  appliances{
string name;
int cost,saleprice;
};

//variables globales
int size;

//prototipo de funciones
int Totalsales(int n,int c );

//funcion principal
int main() {
appliances p1;
    cout<<"cuantos productos electrodomesticos "<<endl;
    cin>>size;

    int *A;
    //arreglo sin longitud predeterminada
    A=new int[size];

    //Recorriendo todos los datos que se le piden al usuario
    for (int i = 0; i < size; i++)
    {
        cout<<"por favor ingrese los electrodomesticos"<<endl;
        cout<<""<<endl;
        cout<<"ingrese el nombre de los electrodomesticos"<<endl;
        getline(cin,p1.name);
        cout<<"ingrese el costo del producto"<<endl;
        cin>>p1.cost;
        cout<<"ingrese el total de productos vendidos"<<endl;
        cin>>p1.saleprice;
    }

    //llamando ala funcion recursiva desde el main
    int z = Totalsales(p1.cost,p1.saleprice);   
    cout << z << endl;
}

//funcion recursiva que me devuelve el costo por el valor total
int Totalsales(int n,int c){
    //caso base
    if(n<=1){
        return 1;
      //llamadas recursivas  
    }else{
        int x = Totalsales(n*c);
        return x ;
    }
}