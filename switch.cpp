#include <iostream>

using namespace std;

int main(){

    string dia;
    int diadesem;

    cout << "Ingrese el nombre del dia de la semana: ";
    cin >> dia;

    if (dia == "lunes"){
        diadesem=1;
    }else if (dia == "martes"){
        diadesem=2;
    }else if (dia == "miercoles"){
        diadesem=3;
    }else if (dia == "jueves"){
        diadesem=4;
    }else if (dia == "viernes"){
        diadesem=5;
    }else{
        cout << "El dia imgresado no corresponde a un dia de cursado";
    }

    switch (diadesem){
    case 1:
        cout << "Los lunes no tenes clases de programacion" <<endl;
        break;
    case 2:
        cout << "Los martes de 14 a 16 hs tenes clases practicas de programacion" << endl;
        break;
    case 3:
        cout << "Los miercoles no tenes clases de programacion" << endl;
        break;
    case 4:
        cout << "Los jueves tenes de 14 a 16  clases teoricas y de 16 a 18 tenes clases practicas de  programacion" << endl;
        break;
    case 5:
        cout << "Los viernes de 14 a 16 tenes clases teoricas de programacion" << endl;
        break;
    }

    return 0;
}

