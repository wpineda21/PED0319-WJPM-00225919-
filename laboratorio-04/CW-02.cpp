#include <iostream>

using namespace std;

struct  Address
{
    int housenumer;
    string city,state;
};

struct personalinfo{
    Address PersonalAddress;
    string name;
    int age;
};

void printInfo(personalinfo* pI, int size, int pos);


int main(void){

personalinfo* pData;
int size = 0;
cout<<"cantidad de datos a ingresar "; cin >> size;
pData = new personalinfo[size];

for (int i = 0; i < size; i++){
    cout<<" Nombre "; cin>> pData[i].name;
    cout<<" edad "; cin>> (pData + i)-> age;
    cout<<" Numero de casa "; cin>> pData[i].PersonalAddress.housenumer ;
    cout<<" ciudad "; cin>> (pData + i)->PersonalAddress.city;
    cout<<" Estado "; cin>> (pData + i)->PersonalAddress.state;
    cin.ignore();
}

     printInfo(pData,size,0);

return 0;
}

void printInfo(personalinfo* pI, int size, int pos){

if(pos == size){

return ;

}else{

    cout<<" Nombre " "\t" <<  pI[pos].name<<endl;
    cout<<" edad "        <<  pI[pos]. age<<endl;
    cout<<" Numero de casa "<< pI[pos].PersonalAddress.housenumer<<endl ;
    cout<<" ciudad "      <<  pI[pos].PersonalAddress.city<<endl;
    cout<<" Estado "      <<  pI[pos].PersonalAddress.state<<endl;
    cin.ignore();

     printInfo(pI, size, pos+1);
}
}


