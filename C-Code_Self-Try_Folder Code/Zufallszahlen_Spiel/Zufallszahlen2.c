// Einige Bibilotheken zu viel aber egal 

#include <stdio.h>   
#include <math.h>    
#include <stdint.h>         
#include <time.h> 
#include <stdlib.h>


int main()
{
    
    srand(time(NULL));
    int zahl1 = rand() % 100; // bereich bis 100  auswahle oder mehr
    int zahl2 = rand() % 21; // das selbe 

    
    // Bereich Definition bei Zahl1 = 59 wird es 59 keine weitern zahlen hinten dran definieren 
    printf("Zufallszahllen %d\n", zahl1 = 59);
    printf("Zufallszahllen %d\n", zahl2);

    return 0; 
}
