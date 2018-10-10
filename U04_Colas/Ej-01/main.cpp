#include <iostream>
#include "../Cola/Cola.h"
using namespace std;


int main() {
    cout << "Ejercicio 04/01" << endl;
    string datos;
    Cola <char> cola1;
    Cola <char> cola2;

    cout<<"Ingrese datos de la cola 1"<<endl;

    for (int i = 0; i < 3 ; ++i) {
        cin >> datos;
        cola1.encolar(i);
    }

    cout<<"Ingrese datos de la cola 2"<<endl;

    for (int j = 0; j < 3; ++j) {
        cin>>datos;
        cola2.encolar(j);
    }

    do {
        if (cola1.desencolar() != cola2.desencolar()) {
            cout<<"Son distintas"<<endl;
            return 0;}
        else
        {cout << "son iguales" << endl;
            return 0;}

    } while (!cola1.esVacia() && !cola2.esVacia());

    //cout<<"Son iguales"<<endl;

    return 0;
}