#include <stdio.h>      // Zum Verstehen was hier zu merken ist und zwar die Zeit der CPU berechnung 
#include <math.h>       // Genau genommen wie lange braucht der PC umd das Programm auszuführen und die Zeit davon  
#include <stdint.h>         // am anfang vom nechsten kapitel gesagt = hier ist die CPU Zeit also = 16 seconde 
#include <time.h>           // das ist neu die Zeit berechnung 

void doSomething()      // Vorteil zum Algorithmen prüfen mit der CPU Zeit 
{
    double val = 0.0;

    for (int i = 0; i < 10000000; i++)
    {
        val *= 1;
    }
}

int main()
{
    clock_t time_start = clock();

    doSomething();

    clock_t time_end = clock();
    clock_t duration = time_end - time_start;

    // s = second, ms = millisecond, mus = microseconds, ns = nanoseconds
    double s = ((double) duration) / CLOCKS_PER_SEC;
    double ms = 1000.0 * s; // s * 10^3
    double mus = 1000.0 * ms; // s * 10^6
    double ns = 1000.0 * mus; // s * 10^9 

    printf("Time: %lf seconds %lf milliseconds %lf microseconds %lf nanoseconds.\n", s, ms, mus, ns);

    return 0;
}