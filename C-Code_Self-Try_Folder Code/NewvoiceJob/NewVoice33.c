// Variante 3 mit CPU Zeit und random zahlen nicht abwechselnd anzeigend 

#include <stdio.h>   
#include <math.h>    
#include <stdint.h>         
#include <time.h> 
#include <stdlib.h>

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
    srand(time(NULL));
    int zahl2 = rand() % 21;

    int n_rounds = 9;
    int i = 0;
    int goal = zahl2;
    int selection;

    getchar(); // mit dem zwischen befehl kann man noch zusätzlich zeit mit enter reinbringen 
    // und sonst einfach in kommentar setzen es funktioniert 

    clock_t time_start = clock();

    doSomething();

    clock_t time_end = clock();
    clock_t duration = time_end - time_start;

    // s = second, ms = millisecond, mus = microseconds, ns = nanoseconds
    double s = ((double) duration) / CLOCKS_PER_SEC;
    double ms = 1000.0 * s; // s * 10^3
    double mus = 1000.0 * ms; // s * 10^6
    double ns = 1000.0 * mus; // s * 10^9 

    // printf("Time: %lf seconds %lf milliseconds %lf microseconds %lf nanoseconds.\n", s, ms, mus, ns);
    printf("Time: %lf seconds.\n",s); 
    printf("Time: %lf milliseconds.\n",ms);
    printf("Time: %lf miqroseconds.\n",mus);
    printf("Time: %lf nanoseconds.\n",ns);


    printf("This is a nice little game!\n");
    printf("You have to guess the right number from the interval [1, 20] to win this game!\n");

    do
    {
        printf("Pls enter a integer number in [1, 20]\n");
        scanf("%d", &selection);

        if((selection > 20) || (selection < 1))
        {
            printf("Zufallszahllen %d\n", zahl2);
            printf("You did not enter a valid number!\nPlease try again! You have %d guesses left!\n\n", n_rounds - (i+1));
            i++;
            continue;
        }

        if(selection == goal)
        {
            printf("Zufallszahllen %d\n", zahl2);
            printf("Correct!\n");
            break;    // bei korrektetr zahl abbruch des Programm 
        }
        else    // else wird bei nich erfüllen verwendet 
        {
            printf("Zufallszahllen %d\n", zahl2);
            printf("Not correct!\nPlease try again! You have %d guesses left!\n\n", n_rounds - (i+1));
        }

        i++;

    } while(i < n_rounds);  // hier definiert es die runden anzahl  = 5 Runden 


    return 0;
}



