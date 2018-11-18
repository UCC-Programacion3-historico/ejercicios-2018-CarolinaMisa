#include <iostream>
using namespace std;


void fn(int x, int v[], int ini, int fin, int pos, bool retorno);

int main() {
    cout << "Ejercicio 09/01\n" << endl;
    return 0;
}


void fn(int x, int v[], int ini, int fin, int pos, bool retorno) {
    pos = ini;
    retorno = false;
    while ((pos <= fin) && (!retorno)) {
        if (v[pos] == x) {
            retorno = true;
        } else
            ++pos;
    }
}

//El algoritmo realiza una busqueda secuencial en un arreglo, efectuada
//por un metodo iterativo. Se busca en compara en el arreglo todos los elementos
//hasta que se encuentra el que coincide con el elemento a buscar.
//Si no existe en el arreglo, la variable posicion superara el tamaño del arreglo.

void fr(int x, int v[], int ini, int fin, int pos){
    pos=ini;
    if(ini>fin)
        return;
    else if(v[pos] == x)
        return;
    else
        fr(x,v,ini++,fin,pos);
}