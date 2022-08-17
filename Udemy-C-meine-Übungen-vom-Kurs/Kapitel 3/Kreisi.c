#include <stdio.h>

#define PI 3.14159

int main()
{
    // Kreis: Radius vom User einlesen
    // Ueberpruefe dabei, ob der User eine "gueltige" Zahl eingegeben hat
    // Berechne den Umfang und den Flaecheninhalt des Krieses
    // Gebe diese Werte dann in der Konsole aus
    // u = 2 * r * PI
    // a = r**2 * PI

    float radius;
    printf("Please enter the radius: ");
    scanf("%f", &radius);

    if (radius < 0.0)
    {
        printf("You entered a negative number! Please re-run the program!");
    }
    else
    {
        float perimeter = 2 * radius * PI;
        float area = radius * radius * PI;

        printf("The perimeter is %f and the area is %f", perimeter, area);
    }
    
    return 0;
}


/*

ned ganz aber chunnt mit üben.


#include <stdio.h>

int main()

{
    unsigned char radius;
    int umfang; 
    int flache; 
    int durchmesser; 

    durchmesser = radius * 2;
    umfang = 2 * radius * 3.14 ;
    flache = radius * 3.14 ;


    scanf(" &\n", radius);

    printf("Der Radius ist %d\n", radius);
    printf("Der Durchmesser ist %d\n", durchmesser);
    printf("Der Umfang der Uhr ist %d\n", umfang );
    printf("Die Flache der Uhr ist %d\n", flache );



    return 0; 
}
*/

