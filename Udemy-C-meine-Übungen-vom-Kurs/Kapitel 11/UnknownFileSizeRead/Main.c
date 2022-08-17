#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "FunctionsBib.h"

int main()
{
    char path[] = "C:/Users/fabia/Desktop/Udemy C/Kapitel 11/UnknownFileSizeRead/InputData.txt";
    // read=r, write=w
    FILE* fp = fopen(path, "r");

    if (fp == NULL)
    {
        return 1;
    }

    // read line by line
    int line_size = 50;
    char* line = malloc(line_size * sizeof(char));

    while (fgets(line, line_size, fp) != NULL)      // fgets = while schleife mit der sting file line 
    {
        int val = atoi(line);   // atoi ist eine Funktion die ein (char) nimmt und in einen (int) konvertiert für das ist atoi da 
        printf("%d\n", val);
    }

    // Close the file
    fclose(fp);

    return 0;
}