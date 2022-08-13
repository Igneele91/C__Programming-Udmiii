// Version 4 mit Stempel wie lang die einzelnen abschnitte berechenen 

// nur spiel und stempel reinbringen 
// merken bei %s   = modulo string 

// Endfassung von Zeitstempel 


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

    int n_rounds = 5;
    int i = 0;
    int goal = zahl2;
    int selection;

    time_t time_start = time(NULL);
    printf("Start Timestamp Unix: %d\n", (int) time_start); // unix zeit stempfel 
    printf("Start Time Format: %s\n", ctime(&time_start)); // beim %s achten ausgabeformat 

    doSomething();
    getchar(); // wir dazu verwendet enter zu drücken in zwüschen zeit 

    time_t time_end = time(NULL);
    printf("End Timestamp Unix: %d\n", (int) time_end);
    printf("End Time Format: %s\n", ctime(&time_end)); // %s ist ein string wie die uhrzeit 


    printf("This is a nice little game!\n");
    printf("You have to guess the right number from the interval [1, 20] to win this game!\n");

    do
    {
        printf("Pls enter a integer number in [1, 20]\n");
        scanf("%d", &selection);



        if((selection > 20) || (selection < 1))
        {
            
            double s = (double) difftime(time_end, time_start);
            double ms = 1000.0 * s; // s * 10^3
            printf("Time: %.2f seconds.\n", s);
            printf("Time: %.6f milliseconds.\n", ms); // %.6f =  bestimmt die nachkomma stellen 

            printf("Zufallszahllen %d\n", zahl2);
            printf("You did not enter a valid number!\nPlease try again! You have %d guesses left!\n\n", n_rounds - (i+1));
            i++;
            continue;
        }

        if(selection == goal)
        {
            
            double s = (double) difftime(time_end, time_start);
            double ms = 1000.0 * s; // s * 10^3
            printf("Time CPU: %.2f seconds.\n", s);
            printf("Time CPU: %.6f milliseconds.\n", ms);   // %.6f =  bestimmt die nachkomma stellen 

            printf("Zufallszahllen %d\n", zahl2);
            printf("Correct!\n");
            break;  // bei korrektetr zahl abbruch des Programm 
        }

        else    // else wird bei nich erfüllen verwendet 
        {
            double s = (double) difftime(time_end, time_start);
            double ms = 1000.0 * s; // s * 10^3
            printf("Time CPU: %.2f seconds.\n", s);
            printf("Time CPU: %.6f milliseconds.\n", ms); // %.6s oder .%6f definiert die länge komma stellen

            printf("Zufallszahllen %d\n", zahl2);
            printf("Not correct!\nPlease try again! You have %d guesses left!\n\n", n_rounds - (i+1));
        }

        i++;

    } while(i < n_rounds);  // hier definiert es die runden anzahl  = 5 Runden 


    return 0;
}




