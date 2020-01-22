#include <iostream>

using namespace std;

int main(){

int aux=1;
int matrix[3][3];

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        matrix[i][j]=aux++;
}
cout<< aux<<endl;
return 0;
}
}