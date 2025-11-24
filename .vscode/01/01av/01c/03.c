#include <stdio.h>
#include <conio.h>

// Function to print a string
void newPrint(char *text)
{
    printf("%s\n", text);
}



int sum(int a, int b)

{
    return a+ b;
}


float average(float a, float b)

{
    return (a+ b)/2;
}
void main()
{
    printf("\n the average of 100 and  299 is %f", average(100,299)); // Corrected printf


    getch(); // Waits for a key press
}
