/*#include <iostream>

using namespace std;


int tamano=0;
int arrayt[10];
int numero;
int *A;

void iniciar_arreglo(int tam)
{
if(tam == 10)
    return;
else{
    cin >> numero;
    arrayt[tam] = numero;
    iniciar_arreglo(tam+1);
}
}

int main(){

cout<<"ingrese el tamano del arreglo"<<endl;
cin>>tamano;

A = new int[tamano];

iniciar_arreglo(1);

for(int i = 1; i <= 9; i++)
    cout << arrayt[i] << ' ';

return 0;
}*/


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void inverso(int vector[],int n){
    if (n>=0){

        cout<<vector[n]<<endl;
        inverso (vector,n-1);
    }
}

int main(){
    int mivector[]={1,2,3,4,5,6,7,8,9};

    inverso(mivector,8);

    return 1;
}










































































/*#include <bits/stdc++.h>

using namespace std;

int arrayt[10];
int numero;

void iniciar_arreglo(int tam)
{
if(tam == 10)
    return;
else{
    cin >> numero;
    arrayt[tam] = numero;
    iniciar_arreglo(tam+1);
}
}

int main()
{
iniciar_arreglo(1);

for(int i = 1; i <= 9; i++)
    cout << arrayt[i] << ' ';

return 0;
}*/



