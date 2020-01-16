#include <iostream>

using namespace std;


int main(){

float array[20];

for(int i = 0; i < 20 ; i++){
cout<<" Digite Nota: " ; cin>> array[i];
}
for (int j=0; j<20; j++){

cout << "nota "<<(j+1)<<array[j]<<endl;


}
return 0;
}