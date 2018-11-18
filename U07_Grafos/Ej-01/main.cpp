#include <iostream>
#include "GrafoMatriz.h"
using namespace std;

int main() {
    GrafoMatriz<string> gr(4);
    gr.nodo_agregar(0,"Hola");
    gr.nodo_agregar(1,"Como");
    gr.nodo_agregar(2,"Chau");
    gr.nodo_agregar(3,"Si");

    gr.arco_agregar(0,2,3);
    gr.arco_agregar(0,1,2);
    gr.arco_agregar(1,0,3);
    gr.arco_agregar(1,1,5);



    cout << "Ejercicio 07/01\n" << endl;
    cout << "Ady 0-1 " << gr.adyacentes(0,1)<< endl;
    cout << "Ady 1-2 " << gr.adyacentes(1,2)<< endl;
    cout << "Ady 2-3 " << gr.adyacentes(2,3)<< endl;


    return 0;
}