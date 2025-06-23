//Brianna Jackson bj0208
#include <stdio.h>
#include <stdlib.h>
#include "major1.h"

//create a function to print the menu
void print_menu(){
    printf("\nEnter the menu option to prrform an operation:\n");
    printf("\t1. Count Leading Zeros\n");
    printf("\t2.Endian Swap\n");
    printf("\t3. Rotate-right\n");
    printf("\t4. Parity\n");
    printf("5. Exit\n");
    printf("-->");
}

int main(){
    int option;
    unsigned int number, rotated;
    int rotate_amount;

    //create a loop to display the menu
    while(1){
        print_menu();
        if(scanf("%d", &option) !=1){
            while(getchar() != '\n');
            printf("Error: Invalid input. Please enter a number 1-5.\n");
            continue;
        }

        //exit case
        if (option == 5){
            printf("Goodbye! See you next time.\n");
            break;
        }

        //invalid case
        if(option < 1 || option > 5){
            printf("Please pick another option between 1-5.");
            continue;
        }

        //cases for numbers within the valid range
        do {
            printf("Enter a 32-bit number (>=1): ");
            if(scanf("%u", &number) !=1 || number < 1){
                while(getchar() != '\n');
                number = 0;
            }
        } 
        while (number == 0);
        
        switch(option) {
            case 1:
                printf("The number of leading zeros in %u is %d\n", number, counting_leading_zeros(number));
                break;
            
            case 2:
                printf("The endian swap of %u gives %u\n", number, endianSwap);
                break;
            
            case 3:
                do {
                    printf("Enter the number of positions to rotate-right between numbers 0 and 31: ");
                    if(scanf("%d", &rotate_amount) !=1 || rotate_amount < 0 || rotate_amount > 31 ) {
                        while (getchar() != '\n');
                        rotate_amount = -1;
                    }
                }
                while (rotate_amount < 0);
                rotated = rotate_right(number, rotate_amount);
                printf("%u rotated by %d position(s) gives: %u\n", number, rotate_amount, rotated);
                break;
            
            case 4:
                printf("Parity of %u is %d\n", number/*, parity function*/);
                break;
            
                default:
                break;
        }
    }
    return 0;
}
