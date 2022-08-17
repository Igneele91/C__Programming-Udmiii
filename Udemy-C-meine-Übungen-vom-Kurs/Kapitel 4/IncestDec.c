#include <stdio.h>

int main()
{
    int a = 1;

    // Increment: i = i + 1     <=> i += 1        <=>    i++   = erhöhen 
    // Decrement: i = i - 1     <=>  i -= 1       <=>    i--   = heruntersetzen 

    printf("Starting!\n");

    printf("Finished round %d\n", a);
    a++; // i++ =  i = i+1

    printf("Finished round %d\n", a);
    a++;

    printf("Finished round %d\n", a);
    a++;

    return 0;
}


/*

hi

*/
