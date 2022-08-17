
#include <stdio.h>

int main()
{
    int n_rounds = 5;
    int i = 0;
    int goal = 13;
    int selection;

    printf("This is a nice little game!\n");
    printf("You have to guess the right number from the interval [1, 20] to win this game!\n");

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
            break;    // bei korrektetr zahl abbruch des Programm 
        }
        else    // else wird bei nich erfüllen verwendet 
        {
            printf("Not correct!\nPlease try again! You have %d guesses left!\n\n", n_rounds - (i+1));
        }

        i++;

    } while(i < n_rounds);  // hier definiert es die runden anzahl  = 5 Runden 


    return 0;
}


