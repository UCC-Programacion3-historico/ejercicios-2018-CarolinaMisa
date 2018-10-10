#include "../Lista/Lista.h"
#ifndef FNINVIERTE_H
#define FNINVIERTE_H


template <class T>
void fnInvierte (Lista<T> *lis);


template <class T>
void fnInvierte (Lista<T> *lis){

    int l=lis->getTamanio()-1;

    for (int j = 0; j < lis->getTamanio()/2; ++j) {
        int aux= lis->getDato(j);
        lis->reemplazar(j,lis->getDato(l-j));
        lis->reemplazar(l-j,aux);
    }

}


#endif //FNINVIERTE_H