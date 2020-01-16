#include <iostream>
#include <string>
#include <string.h>
using namespace std;

struct PeopleData{
string Personname,gender;
int Salary,Age,WorkingYears;
}cd1,cd2,cd3,cd4,cd5;
typedef struct PeopleData Data2;

char sexo;

void Data();
int CompareGender(char sexo);
PeopleData ad1;
int main(){

    Data();
    
return 0;
}
void Data(){

    cout<<"Nombre de Persona"; cin>>cd1.Personname;
    cout<<"Ingres su Sexo";    cin>>cd2.gender;
    cout<<" Salario ";         cin>>cd3.Salary;
    cout<<" Edad " ;           cin>> cd4.Age;
    cout<<"Ano laborales " ;  cin>> cd5.WorkingYears;
    cout<<endl;

//sexo = cd2.gender;
//CompareGender();
}
/*int CompareGender(char sexo){
char Gender[12]={"mujer"};       
 if((strcmp(Gender,sexo)==0){ 
cout<<"es mujer"<<endl;
}
return 0;
}*/


void retirement(){


    
}