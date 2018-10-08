#include <iostream>
#include "../Pila/Pila.h"
using namespace std;



int main() {
    cout << "Ejercicio 03/02" << endl;
    int datos1;
    int datos2;
    Pila<int> pila1;
    Pila<int> pila2;
    cout<<"Ingrese datos de la pila 1"<<endl;
    cin>>datos1;
    for (int i = 0; i < 3 ; ++i) {
        pila1.push(i);
    }

    cout<<"Ingrese datos de la pila 2"<<endl;
    cin>>datos2;
    for (int j = 0; j < 3; ++j) {
        pila2.push(j);
    }

    while (!pila1.esVacia() && !pila2.esVacia()){
        if (pila1.pop() != pila2.pop())
            cout<<"Es distinta"<<endl;
        else
            cout<<"Es igual"<<endl;
    }



    return 0;

}
