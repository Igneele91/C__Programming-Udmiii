#include <stdio.h>
#include <stdlib.h>

#include "Vector.h"
 
// Definiton
Vector* createVector(unsigned int length, float value)
{
    Vector* vec = (Vector*) malloc(sizeof(Vector));
    float* vec_data = (float*) malloc(length * sizeof(float));

    for (int i = 0; i < length; i++)
    {
        vec_data[i] = value;
    }

    vec->data = vec_data;
    vec->length = length;

    return vec;
}

// Definiton
void deleteVector(Vector* vec)
{
    free(vec->data);
    free(vec);
}

// Definiton
void printVector(Vector* vec)
{
    for (int i = 0; i < vec->length; i++)
    {
        printf("%f\n", vec->data[i]);
    }
}

// Definiton
float meanVector(Vector* vec)
{
    float sum = 0.0f;

    for (int i = 0; i < vec->length; i++)
    {
        sum += vec->data[i];
    }

    float mean = sum / vec->length;
    return mean;
}

// Definiton
float minVector(Vector* vec)
{
    float min;

    for (int i = 0; i < vec->length; i++)
    {
        if(i == 0)
        {
            min = vec->data[i];
        }

        if (vec->data[i] < min)
        {
            min = vec->data[i];
        }
    }

    return min;
}

// Definiton
float maxVector(Vector* vec)
{
    float max;

    for (int i = 0; i < vec->length; i++)
    {
        if(i == 0)
        {
            max = vec->data[i];
        }

        if (vec->data[i] > max)
        {
            max = vec->data[i];
        }
    }

    return max;
}