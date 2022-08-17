#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define matrix(i,j) matrix[i * cols + j]

int* createVector(unsigned int length, int value)
{
    int* vector;
    vector = (int*) malloc(length * sizeof(int));

    for (int i = 0; i < length; i++)
    {
        vector[i] = value;
    }

    return vector;
}

int main()
{
    unsigned int rows = 2;
    unsigned int cols = 3;
    unsigned int n_elements = rows * cols;  // es sind 6 Elemente bei der Matrix beim Array merken 

    int* matrix = createVector(n_elements, 0);
    matrix[0] = 00;
    matrix[1] = 01;
    matrix[2] = 02;
    matrix[3] = 10;
    matrix[4] = 11;
    matrix[5] = 12;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("M[%d][%d] = %d\n", i, j, matrix(i,j));
        }
    }

    return 0;
}
/*
Zum Üben 

unsigned int rows = 2;
unsigned int cols = 3;
unsigend in n_elements = rows * cols;

int*matrix = createVector(n_elements, 0);
matrix[0] = 00;
matrix[1] = 01;
matrix[2] = 02;
matrix[3] = 03;
matrix[4] = 04;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("M[%d][%d] =%d\n", i, j, matrix(i,j));
        }
    }
*/
