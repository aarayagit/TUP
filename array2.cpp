#include <iostream>

using namespace std;

int main(){
    /// un nuevo numero al array
    int Numeros[]{1,2,3,4,5,6,7,8};
    int LargoDelArray = sizeof (Numeros)/sizeof (Numeros[0]);
    int NuevoElemento = 9;
    int NuevoTamanio = LargoDelArray + 1;
    int NuevoArray[NuevoTamanio];

    copy (Numeros, Numeros + LargoDelArray, NuevoArray);

    NuevoArray[LargoDelArray]=NuevoElemento;

    cout << "El nuvo array es: "<< endl;

    for (int i=0; i<NuevoTamanio; i++){
        cout << NuevoArray[i];
    }




return 0;
}
