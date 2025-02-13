#include <stdio.h>

int main() {
    int n;

    
    scanf("%d", &n);

    // Loop to print the right-aligned increasing numeric triangle
    for (int i = 1; i <= n; i++) {
        // Printing spaces for right alignment
        for (int j = 1; j <= n - i; j++) {
            printf("  ");  // Two spaces for alignment
        }

        // Printing numbers starting from 1 up to i
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
