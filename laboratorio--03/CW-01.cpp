#include <iostream>

using namespace std;

struct Address{
    int housenumber;
    string city,state;
};

struct personalinfo{
    Address PersonalAddress;
    string name;
    int age;
};


int main(void){
    personalinfo p1;

    cout<<" Nombre "; cin>> p1.name;
    cout<<" edad "; cin>> p1.age;
    cout<<" Numero de casa "; cin>> p1.PersonalAddress.housenumber;
    cout<<" ciudad "; cin>> p1.PersonalAddress.city;
    cout<<" Estado "; cin>> p1.PersonalAddress.state;

return 0;
}