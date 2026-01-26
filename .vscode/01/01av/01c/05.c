#include <stdio.h>
#include <conio.h>  // getch() ke liye

void main() {
    int a[50], n, i, b;  // 'b' = key

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter key: ");
    scanf("%d", &b);

    for(i = 0; i < n; i++) {
        if(a[i] == b) {   // 'b' use karo
            printf("Element found at position %d", i+1);
            getch();   // screen freeze
            return;
        }
    }

    printf("Element not found");
    getch();       // screen freeze
}
