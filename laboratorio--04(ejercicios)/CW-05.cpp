#include <iostream> //libreria que permite el uso de entrada de datos

using namespace std;

//prototipo de funciones
int fibonacci(int n);


//funcion principal
int main() {

    int a=0;    //variable que almacena el dato del numero que desea conocer el usuario
    cout << "Que Numero desea cualcular de la serie  ";
    cin>>a;

    //llamada ala funcion fibonacci
    int f = fibonacci(a);
    cout<<""<<endl;

    //impresion de resultados
    cout << "Resultado: " << f << endl;
}
//funcion recursicva que me devuelve el numero de la serie fibonacci solocitado
int fibonacci(int n){
    //caso base
    if(n<=1){
        return 1;
      //llamadas recursivas  
    }else{
        int x = fibonacci(n-2);
        int y = fibonacci(n-1);
        return x + y;
    }
}