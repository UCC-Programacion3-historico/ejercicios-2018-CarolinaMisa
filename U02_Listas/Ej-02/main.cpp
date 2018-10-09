#include <iostream>
#include "../Lista/Lista.h"
using namespace std;

int main() {
    cout << "Ejercicio 01/02" << endl;

    Lista<int> lista;
    int n;
    cout << "Ingrese cantidad de elementos" << endl;
    cin >> n;

    cout << "Ingrese datos de la lista original" << endl;
    for (int i = 0; i < n; ++i) {
        int e;
        cin >> e;
        lista.insertar(i, e);        // Inserta nodo
    }

    cout << "Elija la posición deseada:" << endl;
    cout << " 1 - Agregar al principio" << endl;
    cout << " 2 - Agregar al medio" << endl;
    cout << " 3 - Agregar al final" << endl;
    cout << " 4 - Salir" << endl;

    int opcion, nuevo;
    int med = 0;
    cin >> opcion;

    if (opcion > 0 || opcion <= 3) {
        if (opcion == 1) {
            cout << "Ingrese dato a agregar" << endl;
            cin >> nuevo;
            lista.insertarPrimero(nuevo);

            for (int i = 0; i <= n; ++i) {
                cout << "Tu lista nueva:  " << lista.getDato(i) << endl;
            }
        }
        if (opcion == 2) {
            cout << "Ingrese dato a agregar" << endl;
            cin >> nuevo;
            med = lista.getTamanio() / 2;
            lista.insertar(med, nuevo);

            for (int i = 0; i <= n; ++i) {
                cout << "Tu lista nueva:  " << lista.getDato(i) << endl;
            }

        }
        if (opcion == 3) {
            cout << "Ingrese dato a agregar" << endl;
            cin >> nuevo;
            lista.insertarUltimo(nuevo);

            for (int i = 0; i <= n; ++i) {
                cout << "Tu lista nueva:  " << lista.getDato(i) << endl;
            }
        }

        return 0;
    }
}