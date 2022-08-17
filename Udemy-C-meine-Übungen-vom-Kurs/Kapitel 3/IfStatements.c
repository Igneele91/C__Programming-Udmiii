#include <stdio.h>

int main()
{
    int age_jan = 24;
    int age_marc = 42;

    // 1 = true                merken
    // 0 = false               merken 

    if (age_jan < age_marc)
    {
        printf("Jan is younger than Marc!");
    }
    else if (age_jan > age_marc)
    {
        printf("Jan is older than Marc!");
    }  
    else
    {
        printf("Jan and Marc have the same age!");
    }

    return 0;
}

/*
    test write 

    int age_jam = 24;
    int age_marc = 42;


    if (age_jan < age marc); 


    if (age jan > age marc); 
    printf("Jan is older than Marc!");


*/

