//
// Created by alumno on 29/08/18.
//

#ifndef PROGRAMACION3_nodo_H
#define PROGRAMACION3_nodo_H

template <class T>

class nodo {

private:

    T dato;

    nodo *next;

public:

    T getDato() const {
        return dato;
    }

    void setDato(T dato) {
        nodo::dato = dato;
    }

    nodo *getNext() const {
        return next;
    }

    void setNext(nodo *next) {
        nodo::next = next;
    }

};



#endif //PROGRAMACION3_nodo_H