#include <stdio.h>
#include <math.h>

int main()
{
    int a = 1; // 0x61ff20
    int b = 2;
    int c = 3;

    // p_d points to the memory location of variable a
    // *p_d is the content of the memory location
    int* p_d = &a;
    int* p_e = &b;
    int* p_f = &c;

    // p_d = 2 * p_e + 3 * p_f
    // *p_d = 2 * 2 + 3 * 3 = 13        = Inhalt der Speicheradresse zu = der Wert 
    *p_d = 2 * *p_e + 3 * *p_f;     // hier ist es 13 
    p_d = &b;                       // hier ist es 13 + 2 = 15 
    p_f = &a;                       // und hier zeigt es auf 13 weil a ja auch 13 ist 

    // p_d -> b, p_f -> a, p_e -> b
    // 2, 13
    *p_e = *p_d + *p_f; // the content of the memory location of p_e is set to 15 = das zeigt nur auf b 

    printf("%d\n", a);
    printf("%d\n", *p_d); // ?
    printf("%d\n", *p_e);
    printf("%d\n", *p_f);

    return 0;
}
/*
    es gibt 3 schreibweisen             int* p_d       oder     int * p_d   oder    int *p_d
*/