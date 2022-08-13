// kleine Hilfe hier aber mit grundlagen 

/* hilfe hier aber ausgabe katastrophe nur ausführen sieht es direkt und 1 eingabe alles doppel und es 
widerholt sich keine ziel also goal ausgabe 
*/

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
    // 1.1.1970
    time_t time_start = time(NULL);
    printf("Timestamp: %.2f\n", (int) time_start);
    printf("Time Format: %s\n", ctime(&time_start));

    doSomething();
    getchar();  // wir dazu verwendet enter zu drücken in zwüschen zeit 

    time_t time_end = time(NULL);
    printf("Timestamp: %.2f\n", (int) time_end);
    printf("Time Format: %s\n", ctime(&time_end));

    // s = second, ms = millisecond,
    double s = (double) difftime(time_end, time_start);
    double ms = 1000.0 * s; // s * 10^3
    



    int n_rounds = 5;
    int i = 0;

    srand((unsigned int) time(NULL));
    int goal = rand() % (20 + 1);
    
    int selection;

    printf("This is a nice little game!\n");
    printf("You have to guess the right number from the interval [1, 20] to win this game!\n");
    
    printf("Goal. %.2f \n", goal);


    do
    {
        printf("Pls enter a integer number in [1, 20]\n");
        scanf("%.2f", &selection);
        
        printf("Time: %.2f seconds.\n", s);
        printf("Time: %.2f milliseconds.\n", ms);
        

        if((selection > 20) || (selection < 1))
        {
            printf("You did not enter a valid number!\nPlease try again! You have %.2f guesses left!\n\n", n_rounds - (i+1));
            i++;
            continue;
        }

        if(selection == goal)
        {
            printf("Correct!\n");
            break;             // bei korrektetr zahl abbruch des Programm 
        }

        {
            printf("Not correct!\nPlease try again! You have %.2f guesses left!\n\n", n_rounds - (i+1));  //  da ist i = (0+1)  minus einer runde 
        }

        i++;

    } while(i < n_rounds);  // hier definiert es die runden anzahl  = 5 Runden 

    return 0;
}


