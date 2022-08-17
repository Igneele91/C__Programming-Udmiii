#include <stdio.h>
#include <math.h>

#include "FunctionsBib.h"
 
int main()      // Fakultät = ! = bei einer Zahl  
{
    // 1! = 1
    // 2! = 2 * 1
    // 3! = 3 * 2 * 1
    // 4! = 4 * 3 * 2 * 1     = 24
    // 5! = 5 * 4 * 3 * 2 * 1 = 120

    // 5! = 5 * 4! = 5 * 4 * 3! = 5 * 4 * 3 * 2! = 5 * 4 * 3 * 2 * 1
    unsigned int a = getNumberFromUser();
    unsigned int a_fac = factorial(a);

    printf("%d! = %d", a, a_fac);

    return 0;
}

/*
    Ab hier wieder den Befehl =   gcc Main.c FunctionsBib.c -o Main.exe 

    Es wird eine Eingabe verlangt zum Beispiel

    Eingabe = 15
    15! = 2004310016

    oder 

    5!
    5! = 120 Recursive Function 

*/ 