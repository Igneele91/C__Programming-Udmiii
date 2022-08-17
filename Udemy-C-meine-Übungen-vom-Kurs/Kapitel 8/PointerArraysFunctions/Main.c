#include <stdio.h>
#include <math.h>
#include <stdlib.h>         // Dieses Video mit dieser aufgabe soll zeigen wie man ein Pointer array returnt = lernziel mit der aufgabe hier.

#include "FunctionsBib.h"

int* createArray(unsigned int length, int value)        // Funktion ist mit Pointer = /  int*creat Array (unsigned int lenght, int value )
{
    int* arr;                                   // zeigt auf eine Heap  adresse von der array list aus 
    arr = (int*) malloc(length * sizeof(int));

    printf("Pointer-arr: 0x%x\n", arr);

    for (int i = 0; i < length; i++)
    {
        arr[i] = value;
    }

    return arr;
}
                    // beide Pointer zeigen auf den Heap  von der array liste aus merken = zu dieser Übung 
int main()
{
    unsigned int length = 3;

    int* array = createArray(length, 1);        // zeigt auf ein Heap adresse von dem array  aus 

    printf("Pointer-Array: 0x%x\n", array);

    for (int i = 0; i < length; i++)
    {
        printf("%d\n", array[i]);
        array[i] = i;
    }

    free(array);
    array = NULL;

    return 0;
}