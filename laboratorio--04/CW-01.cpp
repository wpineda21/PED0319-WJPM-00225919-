#include <iostream>
#include <cmath>



using namespace std;

bool isprime (int n);
int addprimes(int start,int primeQ,int aux);

int main(){

int n=0;
cout<<"porfavor ingrese un numero"<<endl;
cin>>n;


cout<< addprimes(2,n,0)<<endl;


return 0;

}

bool isprime (int n){
    if(n==2)
    return true;
    else{

        for (int i = 2; i <= sqrt(n); i++) {
            if(n % i == 0)

            return false;

            
        }
        return true;

    }
}

int addprimes(int start,int primeQ,int aux){
    if (aux==primeQ){
        return 0;
    }else {

       if (isprime(start)==true){

           return start + addprimes(start+1,primeQ,aux+1);



       } else {
            return 0 + addprimes(start + 1 ,primeQ,aux);

       }


    }



}