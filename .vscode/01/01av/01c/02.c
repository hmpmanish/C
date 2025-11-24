#include <stdio.h>
#include <conio.h>

void main() {

    int a1 = 10;
    float b1 = 10.0;
    char c1 = 'a';

    printf("manish %c", c1);

    printf("\n******Rules for creating variables*****");

    int manishPandey;   
    manishPandey = 76;  

    char five = '5';    

    const int i = 9;    

    manishPandey = 98;  

    printf("\n\n******TYPES OF Operators*****\n");

    /*
    Arithmetic Operators: +, -, *, /, %
    Relational Operators: >, <, >=, <=, ==, !=
    Logical Operators: &&, ||, !
    Assignment Operators: =, +=, -=, *=, /=, %=
    Misc Operators: sizeof, ternary operator (?:)
    */
    // Arithmetic Operators: +, -, *, /, %

    int a = 10, b = 7, c = 8;

    printf("\nThe sum of a and b is: %d", a + b);
    printf("\nThe difference of a and b is: %d", a - b);
    printf("\nThe multiplication of a and b is: %d", a * b);

    printf("\nThe division of a and b is: %d", a / b);   // Correct
    printf("\nThe modulo of a and b is: %d", a % b);     // Correct

    printf("\nThe increment of a is: %d", ++a);
    printf("\nThe decrement of b is: %d", --b);

      // Relational Operators: >, <, >=, <=, ==, !=
int hmp = 5, manish = 7;

printf("\n(hmp == manish) : %d", hmp == manish);
printf("\n(hmp != manish) : %d", hmp != manish);
printf("\n(hmp >  manish) : %d", hmp > manish);
printf("\n(hmp <  manish) : %d", hmp < manish);
printf("\n(hmp >= manish) : %d", hmp >= manish);
printf("\n(hmp <= manish) : %d", hmp <= manish);

    // Logical Operators: &&, ||, !
    int h = 0 , m = 1;
    printf("\n the logical operator retured ; %d", h && m);
    printf("\n the logical operator retured ; %d", h || m);
    printf("\n the logical operator retured ; %d", ! m);
    printf("\n the logical operator retured ; %d", ! h);

    //b itesise oprtaor 
    // A =60 B 14
    // A  =00111100
    // B 00001101
    inT A =60 B 14
    printf("\n  bitwise operators returned %d",a&b);




    getch();
}
