#include <iostream>


using namespace std;


int tamano=0;


int main(void){

int *A;
int m,s,a;

cout<<"Ingrese el tamano del arreglo"<<endl;
cin>>tamano;

if (tamano<2){
    cout <<"ERROR"<<endl;
return 0;
}
A = new int[tamano];

cout<<"comezaremos a rellenar el arreglo"<<endl;

for (int i = 0; i < tamano; i++){
    cout<<"Ingrese los valores por favor"<<endl;
    cin>>A[i];
}
for (int i = 0; i < tamano; i++){
    for (int j = 0; j < tamano; j++) {
    s=0;
    if (A[i]==A[j] && i!=j){
            s=s+1;
    }

    if (s>=m){
        m=s;
        a=i;
    }
}

cout<<"La moda es "<< A[a] << " y tiene  "<<m+1<<" repeticiones "<<endl;

}

return 0; 


}