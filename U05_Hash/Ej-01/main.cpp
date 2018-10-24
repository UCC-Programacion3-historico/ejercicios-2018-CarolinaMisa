#include <iostream>
#include "C:\Users\Misa\Desktop\ejercicios-2018-CarolinaMisa\U05_Hash\HashMap\HashMap.h"
using namespace std;

unsigned int jukl(int  clave){
    return (clave*clave);
}
int main() {

    HashMap <int , char> hm(23,jukl); //clave entera y guardo chars

    hm.put(107, 'a');
    hm.put (97, 'b');
    hm.put (213, 'c');

    cout<<hm.get(107)<<endl;
    cout<<hm.get(97)<<endl;
    cout<<hm.get(213)<<endl;


    cout << "Ejercicio 05/01\n" << endl;
    return 0;
}