#include <stdio.h>
void comparevariables()
{
    int automatic = 0;
    static int staticvar = 0;
    automatic++;
    staticvar++;

    printf("automatic variable : %d\n", automatic);
    printf("static variable : %d\n", staticvar);

}
int main()
{
    comparevariables();
    comparevariables();
    comparevariables();
    return 0;    
}
