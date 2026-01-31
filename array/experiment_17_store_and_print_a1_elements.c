#include <stdio.h>

int main() {
    int numbers[10];
 // hmpmanish
 
    // store elements
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {   // ❌ use ; not ,
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // print elements
    printf("The numbers you entered are:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", numbers[i]);
    }

}
