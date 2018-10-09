#include <iostream>
#include "../Lista/Lista.h"
#include "fnInvierte.h"
using namespace std;

int main() {
    cout << "Ejercicio 02/01\n" << endl;
    Lista<int> lista;
    int dato;

    cout << "Ingrese datos de la lista" << endl;
    for (int i = 0; i <lista.getTamanio() ; ++i) {
        cin >> dato;
        lista.getDato(dato);
    }
    lista.reemplazar(1,dato)


    return 0;
}