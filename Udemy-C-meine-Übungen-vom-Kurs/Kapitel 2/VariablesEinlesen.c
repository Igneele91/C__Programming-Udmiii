#include<stdio.h>

int main ()
{
    float a;
    float b; 
    float c;

    printf("Bitte gebenden Sie im Folgenden Wert für die Varuable a ein!\n");
    scanf("%f", &a);
    
    printf("Bitte gebenden Sie im Folgenden Wert für die Varuable b ein!\n");
    scanf("%f", &b);

    c = a * b;
    printf("C = A * B = %f\n", c);


    int x;
    int y; 
    int z;

    printf("Bitte gebenden Sie im Folgenden Wert für die Varuable x ein!\n");
    scanf("%d", &x);
    
    printf("Bitte gebenden Sie im Folgenden Wert für die Varuable y ein!\n");
    scanf("%d", &y);

    z = x * y;
    printf("Z = X * Y = %d\n", z);


    return 0;
}


