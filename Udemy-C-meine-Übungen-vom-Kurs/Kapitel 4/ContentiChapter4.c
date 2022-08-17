#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j == 0)
                printf("<\t");
            else if (j == 5)
                printf(">\t");
            else if (i == 0)
                printf("  ^\t");
            else if (i == 5)
                printf("  v\t");
            else
                printf("(%d,%d)\t", i, j);
        }

        printf("\n");  // das bedeutet das einenen neun Zeilen umbruch gemacht wird also \t tab und achte auf klammer ist ein \n 
    }

    return 0;
}


// Schauen das ich besser verstehen 


// printf("(%d,%d)\t", i, j);   = das  Bedeutet neues TAb

