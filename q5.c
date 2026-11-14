#include <stdio.h>

int generateID() {
    static int id = 1000;   // Initialized only once

    return id++;
}

int main() {
    printf("Generated ID: %d\n", generateID());
    printf("Generated ID: %d\n", generateID());
    printf("Generated ID: %d\n", generateID());
    printf("Generated ID: %d\n", generateID());

    return 0;
}