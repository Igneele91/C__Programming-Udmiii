#include <stdio.h>

void my_function(int val)
{
    printf("%d\n", val);
}

int main()
{
    int i = 0;
    // Post-Increment
    printf("%d\n", i++);
    // Pre-Increment
    printf("%d\n", ++i);

    int j = 0;
    // Post-Increment
    my_function(j++);
    // Pre-Increment
    my_function(++j);

     // Post-Increment                  im terminal auf der 2 letzten linie 
    for (int i = 0; i < 3; i++)         // hier ist es mit for schleife post-increment 
    {
        printf("%d\n", i);
    }
    // Pre-Increment
    for (int i = 0; i < 3; ++i)            // und hier 2 im terminal auf der letzten linie weil 0, 1, ist 
    {
        printf("%d\n", i);
    }

    return 0;
}