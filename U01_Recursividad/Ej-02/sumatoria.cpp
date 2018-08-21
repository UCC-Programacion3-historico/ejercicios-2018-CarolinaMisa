#include "sumatoria.h"


int sumatoria(int *arr, unsigned int size) {

    if (size<=0)
        return arr[0];
    return sumatoria(arr,size)+arr[size-1];
}