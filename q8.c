#include <stdio.h>

int num = 100;

void display(); 

int main()
{
    printf("Value in main.c = %d\n", num);

    display();

    return 0;
}

void display()
{
    printf("Value in display.c = %d\n", num);
}