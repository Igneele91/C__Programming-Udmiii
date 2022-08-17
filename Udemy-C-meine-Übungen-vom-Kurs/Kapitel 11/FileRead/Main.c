#include <stdio.h>      
#include <math.h>
#include <stdlib.h>     // neu <stdlib.h> verzeichnis 
#include <string.h>

#include "FunctionsBib.h"

int main()
{               // hier ist der pfad von der inputdata.txt datei einfach rechtsklich und kopie path und man hat den pfad zur datei 
    char path[] = "C:/Users/fabia/Desktop/Udemy C/Kapitel 11/FileRead/InputData.txt" ;
    // read=r, write=w
    FILE* fp = fopen(path, "r"); // den Pfeil pfad datei öffnen / den lese modus = r ; 

    if (fp == NULL)     // filepointer = 0 
    {
        return 1;
    }

    Vector v1 = { .data=createVector(5, 0), .length=5 }; // mit 5 Elemente weil ich weiss wie viel zeille ich habe sonst automatischer erweitern 

    for (int i = 0; i < v1.length; i++)
    {
        fscanf(fp, "%d", &v1.data[i]);  // fscanf(fp,) = filescanf ist das file einlesen 
    }

    // Close the file
    fclose(fp);                 // hier wird die datei wieder geschlossen  das sie wieder freigegeben wurde 

    for (int i = 0; i < v1.length; i++)
    {
        printf("%d\n", v1.data[i]);     // hier ist der backslasch für untereinander angeordnet 
    }

    // Free vector data
    free(v1.data);          // die speicher adresse wieder frei gegeben 
    v1.data = NULL;
    v1.length = 0;

    return 0;
}