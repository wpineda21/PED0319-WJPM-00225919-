#include <iostream>
#include <string>
using namespace std;

struct address{
int housenumber;
string city,state;
};
void printinfor(address printAd);

int main(void){

    address ad1;

    cout<<"numero de casa"; cin>>ad1.housenumber;
    cout<<" ciudad ";  cin>>ad1.city;
    cout<<"departamento" ; cin>> ad1.state;
    cout<<endl;

    printinfor(ad1);
return 0;
}

void printinfor(address printAd){

    cout<<"numero de casa:" << printAd.housenumber;
    cout<<" ciudad "  << printAd.city;
    cout<<"departamento"  << printAd.state;

}