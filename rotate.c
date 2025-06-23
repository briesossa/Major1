#include "major1.h"
unsigned int rotate_right(unsigned int value, int amount) {
    amount = amount % 32; 
    return (value >> amount) | (value << (32 - amount));
}
