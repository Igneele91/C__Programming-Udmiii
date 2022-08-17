#include <stdio.h>
#include "FunctionsBib.h"

int main()
{
    int number_user_a = getNumberFromUser();
    int number_user_b = getNumberFromUser();
    int bigger_number = compareNumbers(number_user_a, number_user_b);
    printf("Bigger number is: %d", bigger_number);

    return 0;
}


// Hier eingeben beim Compiler mit dem Header und allem offen:    =     gcc FunctionsBib.c Main.c -o Main.exe 
// sonst funktioniert es nicht das auf linie 17


    // gcc Main.c FunctionsBib.c -o Main.exe
    
