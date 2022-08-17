#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "FunctionsBib.h"

int main()
{
    unsigned int length = getNumberFromUser();
    
    int* array;

    // malloc: memory allocation  =   merken     = bedeutung ist die  Speicherzuweisung gemäss translator 
    // Merken malloc = befhel oder satz 
    array = (int*) malloc(length * sizeof(int));  

    for (int i = 0; i < length; i++)
    {
        array[i] = i;
        printf("Index: %d\n", array[i]);
    }

    free(array);  // dass ist die Speicherfreigabe und wird nach beendigung den Reservierten Speicher wieder Frei gegeben 
    array = NULL;       // Der Array Zeiger soll auf eine Null Speicheradresse zeigen das ist hier gemeint 

    return 0;
}
/*
        Merken wenn man auf Linie 13 das array verwendet undbedingt auch am schluss das Free(array); schreiben
        also

        free(array);
        array = NUll;
    
*/


