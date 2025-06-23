#include "major1.h"

//Alex DeWolf, CSCE 3600.001, 6/22/25
//This endian swap function takes in a 32-bit integer value and finds the four bytes within the number and performs an endian swap on it.
//Bytes 0 and 3 are swapped and then bytes 1 and 2 are swapped. The bytes are then concatenated together in a new swappedVal int and that value is returned.

int endianSwap(int unswappedVal)
{
    int swappedVal;

    int B0 = (unswappedVal & 0xFF000000) >> 24; //swaps B0 and B3
    int B3 = (unswappedVal & 0x000000FF) << 24;

    int B1 = (unswappedVal & 0x0000FF00) << 8;  //swaps b1 and b2
    int B2 = (unswappedVal & 0x00FF0000) >> 8;

    swappedVal = (B0 | B1 | B2 | B3);   //concatenates B variables to form swapped value

    return swappedVal;      //outputs swapped value to function call
}