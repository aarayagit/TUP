#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float peso=0;
    float altura=0;
    float imc=0;

    cout << "Ingrese su peso en Kg: ";
    cin >> peso;

    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    imc=peso/pow (altura,2);

    cout << "Tu indice de masa corporal (imc) es: " << setprecision (4) << imc << endl;

    if (imc<16.5){
        cout << "Segun tu imc estas en bajo peso severo";

    }else if (imc>=16.5 && imc<18.5){
        cout << "Segun tu imc estas en bajo peso";

    }else if(imc>=18.5 && imc<25){
        cout << "Segun tu imc tu peso es normal" << endl;

    }else if (imc>=25 && imc<30){
        cout << "Segun tu imc estas con sobrepeso";

    }else if (imc>=30 && imc<35){
        cout << "segun tu imc tenes obesidad T1 (moderada)";

    }else if(imc>=35 && imc<40){
        cout << "segun tu imc tenes obesidad T2 (severa)";

    }else{
        cout << "segun tu imc tenes obesidad T3 (morbida)";
    }

return 0;
}
