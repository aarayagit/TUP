#include <iostream>

using namespace std;

int main(){

    int Numeros[]={4,5,6,7,8};
    int LargoDelArray= sizeof (Numeros)/sizeof (Numeros[0]);

    for (int i=0; i<LargoDelArray;i++){
        cout<<Numeros[i]<<endl;
    }

return 0;
}
