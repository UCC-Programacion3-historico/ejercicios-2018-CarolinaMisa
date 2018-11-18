//
// Created by Carolina on 18/11/2018.
//

#ifndef PROGRAMACION3_ARCO_H
#define PROGRAMACION3_ARCO_H
#include "NodoGrafo.h"

template <class T>
class NodoGrafo;

template <class T>
class Arco{
private:
    int peso;
    Arco *next;
    NodoGrafo<T> *nodoapuntado;
public:
    Arco(){
        nodoapuntado = nullptr;
        next = nullptr;
    }

    Arco(int p, NodoGrafo<T> *d, Arco *n){
        peso=p;
        nodoapuntado=d;
        next=n;
    }

    void setPeso(int p){peso = p;}

    void setNodoapuntado(NodoGrafo<T> *d){nodoapuntado = d;}

    int getPeso(){ return peso;}

    NodoGrafo<T> *getNodoapuntado(){return nodoapuntado;}

    Arco *getNext(){return next;}
};

#endif //PROGRAMACION3_ARCO_H
