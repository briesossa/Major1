#include "major1.h"
int parity(unsigned int value) {
    int result = 0;
    while (value) {
        result ^= (value & 1); 
        value >>= 1;           
    }
    return result;
}
