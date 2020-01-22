#include <iostream>

using namespace std;

int addnumbers (int limit,int aux);

int main(void){
    cout<<addnumbers(10,1);

}

int addnumber(int limit,int aux){

    if(aux==limit){
        return aux;
    }
    else{
            return aux + addnumber(limit,aux+1);

    }

}

