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

    // Arithmetic Operators
    int a = 10, b = 7, c = 8;

    printf("\nThe sum of a and b is: %d", a + b);
    printf("\nThe difference of a and b is: %d", a - b);
    printf("\nThe multiplication of a and b is: %d", a * b);
    printf("\nThe division of a and b is: %d", a / b);
    printf("\nThe modulo of a and b is: %d", a % b);

    printf("\nThe increment of a is: %d", ++a);
    printf("\nThe decrement of b is: %d", --b);

    // Relational Operators
    int hmp = 5, manish = 7;

    printf("\n(hmp == manish) = %d", hmp == manish);
    printf("\n(hmp != manish) = %d", hmp != manish);
    printf("\n(hmp > manish)  = %d", hmp > manish);
    printf("\n(hmp < manish)  = %d", hmp < manish);
    printf("\n(hmp >= manish) = %d", hmp >= manish);
    printf("\n(hmp <= manish) = %d", hmp <= manish);

    // Logical Operators
    int h = 0, m = 1;

    printf("\nLogical AND  (h && m) = %d", h && m);
    printf("\nLogical OR   (h || m) = %d", h || m);
    printf("\nLogical NOT  (!m)     = %d", !m);
    printf("\nLogical NOT  (!h)     = %d", !h);

    // Bitwise Operators
    int A = 60, B = 13;

    printf("\nA & B (AND)       = %d", A & B);
    printf("\nA | B (OR)        = %d", A | B);
    printf("\nA ^ B (XOR)       = %d", A ^ B);
    printf("\n~A  (NOT)         = %d", ~A);
    printf("\nA << 2 (Left)     = %d", A << 2);
    printf("\nA >> 2 (Right)    = %d", A >> 2);


        // Assignment Operators: =, +=, -=, *=, /=, %= 
        int hm =9;
        hm +=9;
        printf("\n hmp is %d" ,hm);

        // Misc Operators - * , &
        printg("\n\n ******Taking input from user*****");
        int hmpInput;
        printf("\n  Please enter the value of hmpINnput");
scanf("%d",&hmpInput);
        printf("\n  You entered %d as hmpINnput", hmpInput);

    getch();
}
