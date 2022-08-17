#include <stdio.h>

// Return Type: void
// Name: printEvenOrOdd
// Parameters: int number
// Declaration
void printEvenOrOdd(int number);


//void printEvenOdd(int number);

// Return Type: int
// Name: getNumberFromUser
// Parameters: None
// Declaration
int getNumberFromUser();        // int get NumberFromUser;

int main()
{
    int i = getNumberFromUser(); // 0xAA: 12
    printEvenOrOdd(i);

    return 0;
}

/*
    int i = getNumberFromUSer();

*/

// Definition
void printEvenOrOdd(int number) // nur hier in  der Funktion ist die variabel number erhalten 
{
    if ((number % 2) == 0)
    {
        printf("Even!\n");
    }
    else
    {
        printf("Odd!\n");
    }
}

// Definition
int getNumberFromUser()
{
    int number_from_user; //0x00: 12 = das ist die Speicher adresse als hinweis 
    
    printf("Pls enter a interger number!\n");
    scanf("%d", &number_from_user);

    return number_from_user; // return 12;

    // alles was nach dem Return kommt wie printf( hi ); dan gibt der compiler nicht aus
}

/*
int getNumberFrom_User()
{
    int number_from_user;  0x00: 12
    printf("PLS enter a inerger nuber !\n"); 
    scanf("%dx", &number_from_user);

    return number_from_user;  return 12;
    
}

*/

