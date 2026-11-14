#include <stdio.h>

static int number = 50;   // Static global variable

void displayNumber() {
    printf("Number = %d\n", number);
}

int main() {
    displayNumber();
    return 0;
}