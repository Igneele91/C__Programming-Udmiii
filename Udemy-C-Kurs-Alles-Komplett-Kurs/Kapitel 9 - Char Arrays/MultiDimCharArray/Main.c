#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "FunctionsBib.h"

int main()
{
    int number_friends = 3;

    char** friends;
    friends = (char**) malloc(3 * sizeof(char*));

    for (int i = 0; i < number_friends; i++)
    {
        friends[i] = (char*) malloc(20 * sizeof(char));
    }

    friends[0] = "Jan Schaffranek";
    friends[1] = "Peter Lustig";
    friends[2] = "Hans Meier";

    for (int i = 0; i < number_friends; i++)
    {
        printf("Friend: %s\n", friends[i]);
    }

    return 0;
}