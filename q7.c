#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int size = 5;
    int sum = 0;

    register int i;
    for (i = 0; i < size; i++) {
        sum += array[i];
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}