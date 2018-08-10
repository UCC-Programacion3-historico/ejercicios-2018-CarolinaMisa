#include <iostream>
#include "Calculadora.h"
using namespace std;

int main() {
    Calculadora <int> micalc;
    Calculadora <double> micalcdouble;

    cout << "Ejercicio 00/02\n" << endl;

    cout << micalc.sumar(2,2) << endl;
    cout << micalc.restar(2,3) << endl;
    cout << micalc.dividir(4,2) << endl;
    cout << micalc.multiplicar(5,2) << endl;

    cout << micalcdouble.sumar(2.5,2) << endl;
    cout << micalcdouble.restar(2,1.5) << endl;
    cout << micalcdouble.dividir(1,2) << endl;
    cout << micalcdouble.multiplicar(1.5,2) << endl;

    try {
        cout << micalc.dividir(4,0) << endl;
    }   catch (int e){
        cout << "error: " << e <<endl;
    }

    return 0;
}