#include <iostream>
#include "C:\Users\Misa\Desktop\ejercicios-2018-CarolinaMisa\U03_Pilas\Pila\pila.h"
using namespace std ;


int main() {
    cout << "Ejercicio 03/01\n" << endl;

    string caract;
    Pila<char> pila;
    cout <<"ingrese palabra: "<<endl;
    cin>>caract;


    for (int i= 0; i<caract.length();i++)
        pila.push(caract[i]);



    while (!pila.esVacia()){
        cout<<pila.pop();
    }


    return 0;
}