#include <iostream>

using namespace std;

int main (){

    int NumeroIngresado;
    int b;

    cout << "ingrese un numero: " ;
    cin >> NumeroIngresado;

    for (int i=0; i<= NumeroIngresado; i++){
       b = i%2;
        if (b == 0){
            cout << i << ": Es par" << endl;
        }
    }

return 0;
}
