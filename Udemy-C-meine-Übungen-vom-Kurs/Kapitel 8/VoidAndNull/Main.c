#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* a = (int*) malloc(sizeof(int));
    // DO SMTH
    free(a);
    a = NULL;

    int num = 10;
    void* p;            // der void pointer kann auf alle datentypen zeigen 
    p = &num;

    printf("%d", *( (int*) p) );        // incasten pointer zu einem int pointer wird gemacht 
}

/*
    einfach als mal gsehen und zur kentnisse nehmen 

    Terminal ausgabe = 10               weil bei int num 10 ist 

*/
