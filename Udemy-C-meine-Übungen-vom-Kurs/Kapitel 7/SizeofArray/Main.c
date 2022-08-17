#include <stdio.h>
#include <math.h>

#include "FunctionsBib.h"

enum {rows = 2, cols=2};
 
int main()
{
    int M[2][2] = {{1,0}, {0,1}};

    int rows = 0;   // bedeutet Reihen
    int cols = 0;   // auch Reihen aber andere bezeichnung 

    cols = sizeof(M[0]) / sizeof(int);     // bedeutet heisst grösse geteilt durch size int also = wie die grösse berechnet wird 
    rows = sizeof(M) / (cols * sizeof(int));    // genau das gleiche

    // von Zeile 12 auf Zeile 15 muss angeben wie viel der Wert ist also genaue Werte

    printf("Rows: %d\n", rows);
    printf("Cols: %d\n", cols);

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("Hello!\n");
    //     }
    // }

    return 0;
}