#include <iostream>
#include "ColaPrioridades.h"
using namespace std ;

int main() {
    cout << "Ejercicio 04/03\n" << endl;
    ColaPrioridades <int> c;

    for (int i = 10 ; i < 20 ; i ++) {
        c.encolar(i , 9 - (i -10));
    }
    while (!c.esVacia())
        cout << c.desencolar() << endl ;
    return 0;
}