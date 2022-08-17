#include <stdio.h>
#include <math.h>

#include "FunctionsBib.h"
 
int main()
{
    int a = 4;
    int b = 3;
    int c = 0; 
    
    // 16 + 2 * (12) + 9 
    // 25 + 24 = 49             so wie im Terminal ausgabe 
    printf("a=%d, b=%d\n", a, b);
    printf("Call binom function!\n");
    c = binom(&a, &b);
    printf("c=%d\n", c);

    return 0;
}