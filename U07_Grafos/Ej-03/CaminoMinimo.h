//
// Created by Carolina on 18/11/2018.
//

#ifndef PROGRAMACION3_CAMINOMINIMO_H
#define PROGRAMACION3_CAMINOMINIMO_H


#include "../Ej-01/GrafoMatriz.h"

class CaminoMinimo {
protected:
    int *ultimo; //array de predecesores
    int *D;      //array de distancias minimas

private:
    int s, n;     //vertice origen y num de vertices

public:
    CaminoMinimo (GrafoMatriz g, int origen); //constructor
    void Dijkstra (GrafoMatriz g, int origen);//dijkstra
    void recuperaCamino(int v);
    int * OdistanciaMinima();
    int * Oultimo();

private:
    int minimo (bool F[]); //metodo usado x dijkstra
};

CaminoMinimo::CaminoMinimo(GrafoMatriz g, int origen) {
    n = g.;//Numero vertise;
    s = origen;
    ultimo = new int[n];
    D = new int[n];
}

void CaminoMinimo::Dijkstra(GrafoMatriz g, int origen) {
    bool * F;
    F = new bool [n];
    //valores iniciales
    for(int i=0; i<n;i++){
        F[i] = false;
        D[i] = g.arco_get_val(s, i);
        ultimo[i] = s;
    }
    F[s] = true;
    D[s] = 0;    //marca origen e inicializa distancia
    //paso para marcar los n-1 vertices.algoritmo voraz
    for(int i = 1 ;i < n ;i++){
        int v = minimo(F);
        //selecciona vertice no marcado de menor distancia
        F[v] = true;
        //selecciona distancia de vertices no marcados
        for(int w = 0; w < n; w++){
            if(!F[w])
                if(D[v] + g.arco_get_val(v, w) < D[w]){
                    D[w] = D[v] + g.arco_get_val(v, w);
                    ultimo[w] = v;
                }
        }
    }
}

#endif //PROGRAMACION3_CAMINOMINIMO_H
