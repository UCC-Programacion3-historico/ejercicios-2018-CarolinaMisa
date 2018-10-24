#include <iostream>
#include "C:\Users\Misa\Desktop\ejercicios-2018-CarolinaMisa\U05_Hash\HashMap\HashMap.h"
using namespace std;
int main() {
    HashMap <int ,char > hm [23];

    hm.put(123456789, 'a');
    hm.put(987654321, 'b');
    hm.put(159, 'c');

    cout << hm.get(123456789);

    cout << "Ejercicio 05/01\n" << endl;
    return 0;
}