//
// Created by CarolinaMisa on 6/10/2018.
//


 /* Escriba una función void recursiva que reciba como parámetro solo un entero positivo n
    y que despliegue todos los enteros impares menores a n. */


#include "Ej02.h"
#include <iostream>
using namespace std;

void impares (int n){
    if ((n%2) == 0)
        n--;
    cout<<n<<endl;

    if (n==1)
        return;

    impares(n-2);
}

int main (){
    int n;
    cout<<"Ingrese numero entero positivo"<<endl;
    cin>>n;
    if(n<0 || n==0)
        throw 404;
    impares(n);
    return (0);
}