#include <iostream>
#include "mcd.h"
using namespace std;

int main() {
    int a, b;
    cout << "Ejercicio 01/04\n" << endl;
    cout << " Ingrese a " << endl ;
    cin >> a ;
    cout << " Ingrese b" << endl ;
    cin >> b ;

    cout << " El mcd es=" << mcd(a,b) ;

    return 0;
}