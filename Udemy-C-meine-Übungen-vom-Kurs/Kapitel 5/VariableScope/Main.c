#include <stdio.h>
#include <math.h>

//#include "FunctionsBib.h"

int a = 3; // global variable  =   wird überall anweden zuerst compilen 

void func()
{
    int b = 2; // local variable

    printf("(FUNC) a = %d\n", a);   // das bedeutet b ist nur in diesem Abschnitt gültig aber a kann man über all verwenden
    printf("(FUNC) b = %d\n", b);
}
 
int main()
{
    int c = 1;
    
    printf("(MAIN) a = %d\n", a);
    printf("(FUNC) c = %d\n", c);
    func();

    return 0;
}