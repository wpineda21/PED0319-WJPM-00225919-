#include <iostream>
using namespace std;

void printletters();

int main (void){
    int size = 0;
    
    cout<<"Digite la cantidad de letras" ; cin >> size;
    
    char *array;
    array = new char[size];

    for (int i = 0; i < size; i++)
    {   
        cout<<"digite una letra"; cin>> array[i];
        //cout <<"digite letra "; cin>> *(array+i);
    }
    printletters(array,size);
return 0;
}

void printletters(char* printarray, int size){
for (int  i = 0; i < size; i++)
{
      cout<< "letra" << printarray[i] <<endl;

}

}
