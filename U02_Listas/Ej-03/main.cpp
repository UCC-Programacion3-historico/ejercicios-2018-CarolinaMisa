#include <iostream>
#include "../Lista/Lista.h"
using namespace std;
int main() {
    cout << "Ejercicio 01/03" << endl;
    Lista<int> lista;
    int n;
    cout << "Ingrese cantidad de elementos" << endl;
    cin >> n;

    cout << "Ingrese datos de la lista" << endl;
    for (int i = 0; i < n; ++i) {
        int e;
        cin >> e;
        lista.insertar(i, e);        // Inserta nodo
    }

    cout << "Ingrese posicion del elemento que desea eliminar" << endl;
    int pos;
    cin >> pos;
    for (int i = 0; i < n; ++i) {
        if (i==pos-1)
            lista.remover(pos-1);
    }
    for (int i = 0; i < (n-1); ++i) {
        cout << "Tu lista nueva:  " << lista.getDato(i) << endl;
    }

    return 0;
}