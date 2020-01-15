#include <iostream>
#include <string>
#include <string.h>
using namespace std;

struct PeopleData{
string Personname,gender;
int Salary,Age,WorkingYears;
}cd1,cd2,cd3,cd4,cd5;

string sexo;

void Data();
void CompareGender();
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

sexo = cd2.gender;
CompareGender();

}

void CompareGender(){

string Gender[12]={"mujer"};       

 if((strcmp(Gender,sexo)==0){ 

cout<<"es mujer"<<endl;
}