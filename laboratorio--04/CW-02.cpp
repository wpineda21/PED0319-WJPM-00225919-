#include <iostream>
#include <string>

using namespace std;


struct datastudents
{
    string name , report;
    float grade;
};

void fillArray(datastudents* array,int size, int aux);
void PrintArray(datastudents* array,int size, int aux);

int main(void){

int size = 0;
    cin>>size;

datastudents* students;

students = new datastudents[size];




fillArray(students,size,0);
PrintArray(students,size,0);


return 0;


}

void fillArray(datastudents* array,int size, int aux){

if (size==aux)
    return;
else{
    cout<< "nombre "; getline(cin,array[aux].name);
    cout<<" comentarios "; getline(cin,array[aux].report);
    cout<<" nota "; getline(cin,array[aux].report);


}
} 


void PrintArray(datastudents* array,int size, int aux){

if (size==aux)
    return;
else{
    cout<< "nombre " << array[aux].name;
    cout<<" comentarios "<< array[aux].report;
    cout<<" nota " << array[aux].report;


}
} 

