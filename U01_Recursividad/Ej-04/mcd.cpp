#include "mcd.h"

unsigned int mcd(unsigned int a, unsigned int b) {
    if (a < b < 0)
        return 1;
    if (a == b)
        return a;
    if (b > 0)
        return (b, int (a%b));


}