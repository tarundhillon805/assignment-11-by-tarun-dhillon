#include <stdio.h>

/* Global variable defined in another source file */
extern int number;

void modifyNumber();

int main()
{
    printf("Before modification: %d\n", number);

    modifyNumber();

    printf("After modification: %d\n", number);

    return 0;
}