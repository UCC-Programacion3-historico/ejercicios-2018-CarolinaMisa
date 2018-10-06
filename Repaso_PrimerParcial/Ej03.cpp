//
// Created by CarolinaMisa on 6/10/2018.
//

/* Escribir una función recursiva que tenga un parámetro que sea entero positivo y despliegue
    en la pantalla ese número de asteriscos: “*”, todos en una línea */


#include <iostream>

using namespace std;

void asteriscos(int n){			//n=0 sale   n=1 *  n>1 *-n
    if (n==1)
        return;
    cout<<"*";
    asteriscos(n-1);

}



int main (){
    int n;
    cout<<"Ingrese numero entero positivo"<<endl;
    cin>>n;
    if (n<0)
        throw 404;
    asteriscos(n);
    return 0;
}