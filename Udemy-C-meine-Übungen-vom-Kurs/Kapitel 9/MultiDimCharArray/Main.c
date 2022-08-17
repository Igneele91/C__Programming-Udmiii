#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "FunctionsBib.h"           // es wird gezeigt wie man name abspeichern kann in array tabellen ind 2 Dimension 

int main()
{
    int number_friends = 3;     // wie viel freunde = 3 Zeilen

    char** friends;
    friends = (char**) malloc(3 * sizeof(char*));

    for (int i = 0; i < number_friends; i++)
    {
        friends[i] = (char*) malloc(20 * sizeof(char));  // nicht mehr als 19 Zeichen  
    }           // oben bei der 20 zeichen wie viel ihr maximal verwenden darf 
    //irgendwelche namen 
    friends[0] = "Jan Schaffranek";
    friends[1] = "Peter Lustig";
    friends[2] = "Hans Meier";

    for (int i = 0; i < number_friends; i++)
    {
        printf("Friend: %s\n", friends[i]);
    }

    return 0;
}