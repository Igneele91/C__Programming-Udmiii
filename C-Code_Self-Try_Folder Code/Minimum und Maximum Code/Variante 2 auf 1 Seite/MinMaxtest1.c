#include <stdio.h>
#include <math.h>

// Zu alles in einem File  zusmaen zu fassen Übung 

// ---------------------------------------

// Declaration aus .h 
int getNumberFromUser();
int min(int number_a, int number_b);
int max(int number_a, int number_b);

// ---------------------------------------

// aus FunctioncsBib.c 
/* Was fehlt um zahlen zu Integrieren mit
int scanf einlesen und a und b 
zu betätigen die Funktion */

// Definition Funkiton um a + b einlesen
int getNumberFromUser()
{
    int number_from_user; //0x00: 12
    
    printf("Pls enter a interger number!\n");
    scanf("%d", &number_from_user);

    return number_from_user; // return 12;
}

// Definition
int max(int number_a, int number_b)     // das ist das Maximum wert 
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
int min(int number_a, int number_b)     // das wäre das Minimum
{
    if (number_a > number_b)
    {
        return number_b;
    }
    else
    {
        return number_a;
    }
}

// -----------------------------------

// und aus Main 
int main()
{
    int a = getNumberFromUser();
    int b = getNumberFromUser();

    int number_max = max(a, b);
    int number_min = min(a, b);
    
    printf("Max{%d, %d} = %d\n", a, b, number_max);
    printf("Min{%d, %d} = %d\n", a, b, number_min);


    getchar(); // enter anschlag 
    return 0;
}

// Das were in einem Programm sonts drin 
// im kapitel 5 in C bei Content Chapter 