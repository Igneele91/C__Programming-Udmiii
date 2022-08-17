#include <stdio.h>
#include <math.h>

#include "FunctionsBib.h"
 
#define LENGTH 10       // Länge 10 als quelle angegeben und wird auf linie 11 gemeint 
        // unter functionsbib.h hat er den define lenght 10 was angegeben  auf Linie 47 bei FunctionsBib.h genau gesagt 

int main()
{
    // 55 / 10 = 5,5
    int v[LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};    // mir der #define Lenght 10 ist es hier gemeint 
    float mean_v = meanArray(v, LENGTH);            //mean = bedeutet, sagen, meinen übersetzt 
    printf("Mean: %f", mean_v);

    return 0;
}

