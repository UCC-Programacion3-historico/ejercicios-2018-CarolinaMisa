//
// Created by Carolina on 18/11/2018.
//

#ifndef PROGRAMACION3_SHELLSORT_H
#define PROGRAMACION3_SHELLSORT_H


template <class T>
void shellSort(T *vect, unsigned long tamanio){
    int salto, i, j, k;
    salto = tamanio/2;
    while(salto > 0){
        for (i = salto; i < tamanio ;i++){
            j = i - salto;
            while(j>=0){
                k = j+salto;
                if (vect[j] <= vect[k])
                    j=-1;
                else{
                    T aux = vect[j];
                    vect[j]=vect[j+1];
                    vect[j+1]=aux;
                    j-=salto;
                }
            }
        }
        salto=salto/2;
    }
}

#endif //PROGRAMACION3_SHELLSORT_H
