#include <stdio.h>

int main()
{
    int age_jan = 16;
    int age_marc = 16;
    int age_sarah = 16;

    // &&: Conjuction (Konjunktion), logical AND operator
    // ||: Disjunction (Disjunktion), logical OR operator   = oder der andere = 0 or 1  / 1 oder 0 
    // !: Negation (Negation), logical NOT operator die einte wird zu nicht 

    // Who is the youngest person?
    if ((age_jan < age_marc) && (age_jan < age_sarah))
    {
        printf("Jan is the youngest person!");
    }
    else if ((age_marc < age_jan) && (age_marc < age_sarah))
    {
        printf("Marc is the youngest person!");
    }
    else if ((age_sarah < age_jan) && (age_sarah < age_marc))
    {
        printf("Sarah is the youngest person!");
    }
    else
    {  
        if ((age_jan == age_sarah) && (age_jan == age_marc))
        {
            printf("All of the 3 persons have the same age!");
        }
        else
        {
            printf("There are 2 persons with the same age!");
        }
    }

    return 0;
}


/*

== gleich 

negation ist alles umgekehrt bei 0 > 1 wird zu   1 > 0   und das wäre wahr 



*/

