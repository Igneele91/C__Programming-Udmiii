

#include <stdio.h>               
#include <time.h>  
#include <stdlib.h>

// bedeutet = Argument Counter (Zähler) =argc  immer grösser als 1 
//   Argument Values (Werte)     = eine weiter Bezeichnung dazu 
// const char * = constante variable pointer  
int main  (int argc, const char * argv[])   
{
    srand((unsigned int) time (NULL));      //srand befehl in stdlib.h =pseudo number / von time (null zeit punkt aus)

    int zufall; // klare definition int = zufall; 


    // deffinierte Bereich 
    zufall = rand() % (20 + 1);  // definition des Bereich mid % = Modulo zahlt bei 20 nur bis 19 darum = 20 + 1 


    printf("Zufallszahl %d\n", zufall);  // sonst %f nehmen frü float komma zahlen 
    
    return 0; 
   // ES funktioniert so vom 1 teil 
}




