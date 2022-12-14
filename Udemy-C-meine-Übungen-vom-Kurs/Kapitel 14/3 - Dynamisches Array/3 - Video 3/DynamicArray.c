#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
 
#include "DynamicArray.h"
 
dynamic_array_t* dynamic_array_new()
{
    dynamic_array_t* array = (dynamic_array_t*) malloc(sizeof(dynamic_array_t));
    if(!array)
        return NULL;

    array->capacity = INIT_CAPACITY;
    array->data_size = sizeof(float);
    array->len = 0;

    float* array_data = (float*) malloc(array->capacity * array->data_size);
    array->data = array_data;
}

void dynamic_array_expand(dynamic_array_t* array)
{
    array->capacity = array->capacity * 2;
    array->data = realloc(array->data, array->capacity * array->data_size);
}

void dynamic_array_shrink(dynamic_array_t* array)
{
    array->capacity = array->capacity / 2;
    array->data = realloc(array->data, array->capacity * array->data_size);
}

void push_element(dynamic_array_t* array, float val)
{
    array->data[array->len] = val;
    array->len++;

    if(array->len == array->capacity)
        dynamic_array_expand(array);
}

void pop_element(dynamic_array_t* array)
{
    array->data[array->len] = 0;
    array->len--;

    if(array->len < array->capacity / 2)
        dynamic_array_shrink(array);
}

void dynamic_array_empty(dynamic_array_t* array)
{
    free(array->data);
    array->data = NULL;
    array->len = 0;
    array->capacity = INIT_CAPACITY;        // reservierung der speicherung mit capacity 
}

void dynamic_array_print(dynamic_array_t* array)
{
    printf("\nPrintign DynamicArray that contains %d elements with a capacity of %d.\n", array->len, array->capacity);
    for (int i = 0; i < array->len; i++)
    {
        printf("Current calue: %f, At position: %d.\n", array->data[i], i);
    }
}