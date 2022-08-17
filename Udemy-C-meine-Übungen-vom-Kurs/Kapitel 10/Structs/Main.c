#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "FunctionsBib.h"

struct Friend           // in einer Struktur kann man mehrere Atribute bündeln 
{
    char* name;
    char* prename;
    unsigned int year;
    unsigned int month;
    unsigned int day;
};      // Das ist oben eine Stuktur mit der auflistung Friend  

int main()
{
    struct Friend jan = {"Schaffranek", "Jan", 1994, 02, 24};
    struct Friend lara = {"Hausmann", "Lara", 1992, 12, 12};
    struct Friend fabu = {"Moosmann", "Fabu", 1991, 12, 23};

    printf("%d\n", jan.year);
    printf("%d\n", jan.month);
    printf("%d\n", jan.day);
    printf("%s\n", jan.name);
    printf("%s\n", jan.prename);

    jan.year = 1993;
    jan.month = 03;
    jan.day = 24;
    jan.name = "Schafranek";
    jan.prename = "Yan";

    printf("%d\n", jan.year);
    printf("%d\n", jan.month);
    printf("%d\n", jan.day);
    printf("%s\n", jan.name);
    printf("%s\n", jan.prename);

    struct Friend friend_book[2];
    friend_book[0] = jan;
    friend_book[1] = lara;
    friend_book[2] = fabu;
   
    // das hier ist test unten dran ------------------

    fabu.year = 1991;
    fabu.month = 12;
    fabu.day = 23;
    fabu.name = "Moosmann";
    fabu.prename = "Fabu";

    printf("%d\t", fabu.year);
    printf("%d\t", fabu.month);
    printf("%d\t", fabu.day);
    printf("%s\t", fabu.name);
    printf("%s\t", fabu.prename);

    // test ----------------------

    return 0;
}