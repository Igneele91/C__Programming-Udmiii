#include <stdio.h>
#include <math.h>

#include "FunctionsBib.h"
 
int main()
{
    int a = 2;

    // &: Speicheradresse einer Variable
    printf("Variable a hat den Wert: %d\n", a); // 2
    printf("Variable a hat die Speicheradresse: 0x%x\n", &a); // 0x61ff2c

    int* pointer_b = &a;

    printf("Der Pointer b zeigt auf die Speicheradresse: 0x%x\n", pointer_b); // 0x61ff2c (Referenzierung)
    printf("Der Pointer b zeigt auf den Wert: %d\n", *pointer_b); // 2 (Dereferenzierung)   Der Wert bekommt man mit dem * 
    printf("Der Pointer b hat die Speicheradresse: 0x%x\n", &pointer_b); //0x61ff28

    return 0;
}
/*
Bei der Linie 17 zeigt der Pointer_b mit dem * auf der Wert der Speicher adresse merken /
 =(den Wert: %d\n", *pointer_b); = machte ein Verweis zum Pointer b

*/