#include <stdio.h>
#include <math.h>
#include <stdlib.h>     // Zeile 56 im functionsbib.c mit ( vector* vec) definiert  
#include <string.h>

#include "FunctionsBib.h"

int main()
{       // weil hier ist die Typen bezeichnung 
    struct Vector v1 = {createVector(10, 1), 3};        /* Vector wird gross geschrieben = man sagt es ist ein Objekt ansamlung 
     mit der definiton = createVector(10, 1), 3;  */

    for (int i = 0; i < v1.length; i++)     // die länge der funktion dazu  i++ 
    {
        v1.data[i] = i;         // for schleife von v1.datat[i] = i; 
    }

    int max_v1 = maxVector(&v1);            // Linie 17 bis 19 habe ich so halb richtig aus kapitel 7 minimum und max 
    int min_v1 = minVector(&v1);
    float mean_v1 = meanVector(&v1);

    printf("%d\n", max_v1);
    printf("%d\n", min_v1);
    printf("%f\n", mean_v1);

    return 0;
}