//
// Created by Carolina on 18/11/2018.
//

#ifndef PROGRAMACION3_QUICKSORT_H
#define PROGRAMACION3_QUICKSORT_H


template <class T>
void quickSort(T *vect, unsigned long inicio, unsigned long fin){
    unsigned long i, j, central;

    central = (inicio+fin)/2;
    T pivote = vect[central];
    i = inicio;
    j = fin;

    do{
        while (vect[i] < pivote) i++;
        while (vect[j] > pivote) j--;

        if(i <= j)
        {
            T aux = vect[i];
            vect[i]=vect[j];
            vect[j]=aux;
            i++;
            j--;
        }
    }
    while (i <= j);

    if (inicio < j)
        quickSort(vect, inicio, j);
    if (i < fin)
        quickSort(vect, i, fin);
}


#endif //PROGRAMACION3_QUICKSORT_H
