#include <stdio.h>

#include "FunctionsBib.h"

int main()
{
    int a = 1;
    int b = 2;

    for(int i = 0; i < 3; i++)
    {
        a = my_computation(a, b);
    }

    return 0;
}