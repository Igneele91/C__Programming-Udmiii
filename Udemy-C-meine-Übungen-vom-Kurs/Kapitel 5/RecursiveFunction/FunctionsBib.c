#include <stdio.h>
#include "FunctionsBib.h"
  
// Definition
void printEvenOrOdd(int number)
{
    if ((number % 2) == 0)
    {
        printf("Even!\n");
    }
    else
    {
        printf("Odd!\n");
    }
}

// Definition
int getNumberFromUser()
{
    int number_from_user; //0x00: 12
    
    printf("Pls enter a interger number!\n");
    scanf("%d", &number_from_user);

    return number_from_user; // return 12;
}

// Definition
int compareNumbers(int number_a, int number_b)
{
    if (number_a < number_b)
    {
        return number_b;
    }
    else
    {
        return number_a;
    }
}

// Definition
unsigned int factorial(unsigned int i)
{
    if (i <= 1)
    {
        return 1;   // Das wird Rückwarts durchgegangen einfach zur Info 
    }

    return i * factorial(i-1);
}

/*
    Bei unsigned int factorial ist ein stoper drin  
    oder sogar einbauen mit:        if(i<=1)    danach return 1;

*/