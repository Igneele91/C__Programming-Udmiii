#include <stdio.h>
#include <stdlib.h>

int main()
{                            //             Malloc und Calloc ist fast das gleiche 
    // Malloc: Random/Garbage values        = bedeutet  Irgend ein Wert von der Speicheradresse ausgaben und initalisiert 
    // Calloc: All Values to 0              = bedeutet alle Werte geben werden mit Null / 0 initalisiert und weitergearbeite
    int length = 4;          
    int* arr = (int*) calloc(length, length*sizeof(int));

    for(int i = 0; i < length; i++)
    {
        arr[i] = i;
        printf("%d\n", arr[i]);
    }

    // Realloc:             bedeutet = wird die Länge Erweitert  um einige stellen
    length = 6;
    arr = (int*) realloc(arr, length);
    printf("\n");

    for(int i = 0; i < length; i++)
    {
        arr[i] = i;
        printf("%d\n", arr[i]);
    }
}