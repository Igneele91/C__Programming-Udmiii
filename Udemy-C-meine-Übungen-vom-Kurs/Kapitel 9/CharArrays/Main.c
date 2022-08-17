#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "FunctionsBib.h"

int main()
{
    // Char Array           Buchstaben abspeichern im Array  \0  = nur bei char array 
    char name[] = {'J', 'a', 'n', '\0'};    // das \0 wird so eingesetzt das es als Leerzeichen gilt ung nicht 

    for(int i = 0; i < 4; i++)              // also \0 = Leerzeichen  nur bei char Array = wichtig 
    {
        printf("%c\n", name[i]);
    }

    // String    =   bei Stings mach er wie jetzt hier mit char name2[] = "Jan"; macht er das automatisch und braucht kein \0 dafür 
    char name2[] = "Jan";

    for(int i = 0; i < 4; i++)
    {
        printf("%c\n", name2[i]);
    }

    char* name3;
    name3 = (char*) malloc(4*sizeof(char));

    name3[0] = 'J';
    name3[1] = 'a';
    name3[2] = 'n';
    name3[3] = '\0';

    for(int i = 0; i < 4; i++)
    {
        printf("%c\n", name3[i]);
    }

    return 0;
}
