#include <stdio.h>
#include <math.h>

//#include "FunctionsBib.h"
 
int main()
{
    float a = 0.0f;
    float sinus_a = sin(a);
    float cosinus_a = cos(a);

    printf("Sinus(a) = %.04f\n", sinus_a);
    printf("Cosinus(a) = %.04f\n", cosinus_a);

    float b = 2.33456f;
    float c = ceil(b); // Ceil = Aufrunden              Ceil = bedeutet Übersetzt Decke 
    float d = floor(b); // Floor = Abrunden             Floor = bedeutet Übersetzt Fussboden

    printf("Ceil(b) = %.04f\n", c);
    printf("Floor(b) = %.04f\n", d);

    float e = 4.0f;
    float f = sqrt(e); // square-root
    float g = pow(e, 3.0f); // x^y

    printf("Sqrt(%f) = %f\n", e, f);
    printf("%f^3 = %f\n", e, g);
    // 4 * 4 = 16 * 4 = 64 
    
    return 0;
}