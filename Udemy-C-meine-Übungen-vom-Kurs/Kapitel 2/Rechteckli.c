#include <stdio.h>

int main ()
{
    // Rechteck: a, b, vom User einlesen
    // Berechne den Umfang und die Fläche des Inhaltes 
    // Gebe diese Werte in der Konsole aus.
    // Formel = a * b = Flache und Umfang ist = 2 * a + 2 *b

    float a = 3;
    float b = 7;
    float u;
    float q;


    printf("Seite a ist %f\n",a);
    printf("Seite b ist %f\n",b);

    u = 2 * a + 2 * b;
    printf("Das ist der Umfang %f\n", u);

    q = a * b;
    printf("Das ist der Flacheninhalt %f\n", q);

    return 0;
}