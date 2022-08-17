#include <stdio.h>
#include <math.h>

void func(int a_func)
{
    printf("%d\n", a_func);
}
 
    // ist ein Beispiel mit von einem Studenten mit der For Schleife und die Variable einsetzt 
    // weil hier musste das i ausserhalb definiert werden und nicht loakal 

int main()
{
    int i = 3; // line 11 - 20

    for (int i = 0; i < 5; i++) // line 13 - 16
    {
        // something
    }

    printf("%d\n", i); // i from line 11

    return 0;
}