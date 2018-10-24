#ifndef HASHMAP_H
#define HASHMAP_H

template<class K, class T>
class HashMap {
private:
    unsigned int hashFunc(K clave);

    unsigned int hashFuncDefault (K clave) { return 0;}

    unsigned int (*hashFuncP)(K clave);

    T **datos; //nuestro arreglo

    unsigned int tam; // para mantener el tamaño


public:
    HashMap(unsigned int k);        // constructor, tamaño tabla hash

    HashMap(unsigned int k, unsigned int (*hashFuncP)(K clave));    // implementando la funcion

    T get(K clave);     // sacar datos con una clave

    void put(K clave, T valor); // poner dato

    void remove(K clave);   // eliminar dato - hacerlo nulo

    ~HashMap();

    bool esVacio();

};

template<class K, class T>
HashMap<K, T>::HashMap(unsigned int k) {
    datos = new T *[k]; //creamos tabla
    tam = k; //saber cuantos datos tenemos
    hashFuncP = this->hashFuncDefault;
    for (int i = 0; i < k; ++i) {
        datos[i] = nullptr;
    }
}

template<class K, class T>
HashMap<K, T>::~HashMap() { // destructor
    for (int i = 0; i < tam ; ++i) {
        if (datos[i] != nullptr)
            delete datos[i];
    }
}

template<class K, class T>
T HashMap<K, T>::get(K clave) {     // tomo el dato
    unsigned int idx = hashFuncP(clave) ;
    if (datos[idx] == nullptr)
        throw 404;
    return *datos[idx];

}

template<class K, class T>
void HashMap<K, T>::put(K clave, T valor) {
    unsigned int idx = hashFuncP(clave) ;    // llama puntero-funcion k
    if (datos[idx] != nullptr)      // colision
        throw 1;
    datos[idx] = new T;
    *datos[idx] = valor;        //contenido nuevo es igual al valor

}

template<class K, class T>
void HashMap<K, T>::remove(K clave) {
    unsigned int idx = hashFunc(clave);
    if (datos[idx] == nullptr)
        throw 404;

    delete datos[idx];
}

template<class K, class T>
bool HashMap<K, T>::esVacio() {
    return false;
}

template<class K, class T>
unsigned int HashMap<K, T>::hashFunc(K clave) {     // devuelve hashp con la clave que me pasen y se asegura que no se pase del tamano
    return hashFuncP(clave) % tam;
}

template<class K, class T>
HashMap<K, T>::HashMap(unsigned int k, unsigned int (*fp)(K)) {

    datos = new T *[k]; //creamos tabla
    tam = k;          //saber cuantos datos tenemos
    hashFuncP = fp;
    for (int i = 0; i < k; i++) {
        datos[i] = nullptr;
    }
}

// puntero a funcion, le das el otro nombre a la funcion. Cuando llamo fp llamo a la funcion...
#endif //HASHMAP_H