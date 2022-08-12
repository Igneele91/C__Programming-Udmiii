#include <stdio.h>
#include <math.h>

#include "FunctionsBib.h"
 
int main()
{
    int a = getNumberFromUser();
    int b = getNumberFromUser();

    int number_max = max(a, b);
    int number_min = min(a, b);
    float number_mean = mean(a, b);

    printf("Max{%d, %d} = %d\n", a, b, number_max);
    printf("Min{%d, %d} = %d\n", a, b, number_min);
    printf("Mean[%d, %d] = %f\n", a, b, number_mean);
    
    getchar();
    return 0;
}


// -----------------
/* Zu alles in einem File  zusmaen zu fassen Übung 

// Declaration aus .h 
int min(int number_a, int number_b);
int max(int number_a, int number_b);

// aus FunctioncsBib.c 
// Definition
int max(int number_a, int number_b)     // das ist das Maximum wert 
{
    if (number_a < number_b)
    {
        return number_b;
    }
    else
    {
        return number_a;
    }
}

// Definition
int min(int number_a, int number_b)     // das wäre das Minimum
{
    if (number_a > number_b)
    {
        return number_b;
    }
    else
    {
        return number_a;
    }
}

// und aus Main 

int main()
{
    
    int number_max = max(a, b);
    int number_min = min(a, b);
    
    printf("Max{%d, %d} = %d\n", a, b, number_max);
    printf("Min{%d, %d} = %d\n", a, b, number_min);


    getchar();
    return 0;
}
*/

