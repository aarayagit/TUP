#include <iomanip>
#include <math.h>
#include <iostream>

using namespace std;

int main (){

        float peso=0;
        float altura=0;
        float imc=0;

        cout << "Ingrese su peso en kg : ";
        cin >> peso;

        cout << "ingrese su altura en metros : ";
        cin >> altura;

        imc=peso/pow(altura,2);

        cout << "Su IMC es " << imc << " kg/m2" << endl;

return 0;

}
