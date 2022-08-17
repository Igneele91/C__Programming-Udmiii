#include <stdio.h>
#include <math.h>

#include "FunctionsBib.h"

// Call by Value:
// Local copy of the input !!!value!!!          und hier kann den wert verändern so wie er es erklärt hat 
float add(float z_func) // 0x61ff10
{
    printf("Add: 0x%x\n", &z_func);     // das hier ist aufruf bei wert = achte auf das ( &zfunc ) wieder mit &
    z_func += 3.0f;

    return z_func;
}

// Call by Reference:
// Input is the argument variable           Hier geben die varablen an und können sie ab ändern 
void sub(float* z_func) // 0x61ff2c
{
    printf("Sub: 0x%x\n", z_func);
    *z_func = *z_func - 3.0f;               // ab hier wird der Pointer eingesetzt = *z_func -3.0f;
}                                           // ist eine Zeiger Variable 
 
int main()
{
    float z_main = 1.0f; // 0x61ff2c
    printf("Main Addr.: 0x%x\n", &z_main);

    // Call by Value        = Funkion aufruf bei Wert und der Wert wird bei z_func gespeichert 
    z_main = add(z_main);
    printf("Main Val.: %f\n", z_main);      


    // Call by Reference
    sub(&z_main);
    printf("Main Val.: %f\n", z_main);          // 2 Vorteil by Call Referenz 

    return 0;
}

/*
    Merken der Speicheradresse anordnung wenn man im terminal auf die Speicheradresse fährt mit der Maus 
    wird angezeigt von wem es ist
*/
