#include "major1.h"

//define an int function to count the leading zeros
    int count_leading_zeros(unsigned int x){ //unsigned can only hold zeros and positive #s
        int count = 0;
        for(int i = 31; i>= 0; i--){
            //isolate the i-th bit
            if ((x>>i) & 1){
                break;
            }
            count++;
        }
        return count;
    }