#include <stdio.h>
#include <math.h>

void add(double* value1, double* value2, double add_value)
{
    *value1 += add_value; // * content (value) of the variable that is pointed to
    *value2 += add_value; // * content (value) of the variable that is pointed to
}                         // Hier meint er das der Zeiger auf den Wert zeigt und so in verändern kan mit dem Zeiger/Pointer 
/*                        Vorteil bye Call Referenz ist das man so mehrere Werte verwenden kann mit den Zeiger
*/
int main()
{
    double my_value1 = 3.0;
    double my_value2 = 2.0;
    double my_add_value = 1.3;

    add(&my_value1, &my_value2, my_add_value);

    printf("%lf\n", my_value1);
    printf("%lf\n", my_value2);

    return 0;
}
/*
Hier ist es mit dem Variabeln der Pointer rechenen 
*/