

#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <time.h>

void doSomething()
{
    double val = 0.0;

    for (int i = 0; i < 100000000; i++)
    {
        val *= 1;
    }
}

int main()
{
    int n_rounds = 5;
    int i = 0;
    double goal = 13;
    int selection;
    

    // und der Zeitstempel 
    time_t time_start = time(NULL);
    
    printf("This is a nice little game!\n");
    printf("You have to guess the right number from the interval [1, 20] to win this game!\n");

    time_t time_end = time(NULL);
    double s = (double) difftime(time_end, time_start);
    double ms = 1000.0 * s;

    

   /* 
   printf("goale = double ms %d\n",s);

    goal = s/2;  befehl wird anderst geschriben und und der zufallsgenerator ist auch noch nicht drin 
    printf("goal = double ms %d\n",goal);            und die %.2d = intecher wert ausgabe 

    */


    do
    {
        printf("Pls enter a integer number in [1, 20]\n");
        scanf("%d", &selection);

        if((selection > 20) || (selection < 1))
        {
            printf("You did not enter a valid number!\nPlease try again! You have %d guesses left!\n\n", n_rounds - (i+1));
            i++;
            continue;
        }

        if(selection == goal)
        {
            printf("Correct!\n");
            break;
        }
        else
        {
            printf("Not correct!\nPlease try again! You have %d guesses left!\n\n", n_rounds - (i+1));
        }

        i++;

    } while(i < n_rounds);

    return 0;
}
