#include <stdio.h>

int main()
{
    int a = 110;
    int b = 8;
    int div_result = a / b;
    int div_remainder = a % b;

    printf("A / B = %d\n", div_result);
    printf("A %% B = %d\n", div_remainder);

    printf("%d * %d + %d =%d", div_result, b, div_remainder, div_result * b + div_remainder);


    return 0;
}

/*
int a 110 =;
int b = 8;
in div_result = a / b;
int div_remainder = a % b;

printf("A / B = %d\n", div_result);
printf("A %% B = %d\n", div_rimainder);







*/
