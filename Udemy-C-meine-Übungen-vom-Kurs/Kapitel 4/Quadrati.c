#include <stdio.h>

int main ()

{
    // Quadrat: Seitenlänge a vom User einlesen
    // Ueberpruefe dabei, ob der User eine "gueltige" Zahl eingegeben hat
    // Wenn nicht, gebe dem User solange die Möglichkeit die Zahl einzugeben, bis sie gültig ist
    // Berechne den Umfang und den Flaecheninhalt des Quadrats
    // Gebe diese Werte dann in der Konsole aus
    // u = 4 * a
    // a = a**2



    int is_valid_number = 0;
    float a;

    while(is_valid_number == 0)         // while (is valid  number == 0)
    {
        printf("Please enter the value for a: ");   // Ausgabe bitte Zahl eintragen 
        scanf("%f", &a);            // einlesen der zahl 

        if(a > 0.0)
        {
            is_valid_number = 1;
        }
        else        // ist es nicht gleich oder gültige Zahl 
        {
            printf("You entered a not valid number!\n"); // nicht verfügbare Zahlen nicht gültig 
        }
    }

    float perimeter = 4 * a;
    float area = a * a;

    printf("Permieter %f, area %f", perimeter, area);





    return 0;

}



/*

Eingaben unbedingt lernen kommt alles mit der Zeit 



*/
