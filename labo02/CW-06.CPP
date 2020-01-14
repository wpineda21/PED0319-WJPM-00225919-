#include <iostream>
#include <string>
using namespace std;

struct Enterprise{

    string name;
    int employees;

};

int main(void){
    
    Enterprise*array;
    int size;

cout<<"digite cantidad de empresas"; cin>>size;
array= new Enterprise[size];

for (int  i = 0; i < size; i++){

cout<<"nombre: "; cin>>array[i].name;
cout<<"Empleados: "; cin>> (array + i)->employees;

}

return 0;

}