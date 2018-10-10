#include <iostream>
#include "C:\Users\Misa\Desktop\ejercicios-2018-CarolinaMisa\U02_Listas\Lista\Lista.h"
#include "C:\Users\Misa\Desktop\ejercicios-2018-CarolinaMisa\U02_Listas\Ej-01\fnInvierte.h"
using namespace std;

int main() {
    cout << "Ejercicio 02/01" << endl;
    Lista <int> *lista = new Lista <int>;

    cout << "Ingrese cantidad de elementos" << endl;
    int n;
    cin >> n;


    cout << "Ingrese datos de la lista original" << endl;
    for (int i = 0; i < n; ++i) {
        int e;
        cin >> e;
        lista->insertar(i,e);
    }

    fnInvierte(lista);

    for (int i = 0; i < n; ++i) {
        cout << "Tu lista nueva:  " << lista->getDato(i) << endl;
    }

    return 0;
}