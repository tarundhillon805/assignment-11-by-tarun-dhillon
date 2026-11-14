#include <stdio.h>
int number = 100;
int main()
{
    printf("global variable number = %d\n", number);
{
int number = 50;
printf("local variable number = %d\n", number);
}
{
    printf("outside block variable number = %d\n", number);
}
return 0;
}