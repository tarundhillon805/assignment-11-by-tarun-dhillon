#include <stdio.h>

int main() {
    printf("Program starts\n");

    {
        int number = 10;

        printf("Inside block: number = %d\n", number);
    } 

    printf("Block has ended\n");

    return 0;
}