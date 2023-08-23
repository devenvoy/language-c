#include <stdio.h>

int main() {
    int n = 4; // Height of the diamond (excluding the tip)
    int i, j, k;

    // Printing the upper half of the diamond
    for (i = 0; i < n; i++) {
        // Printing spaces before the asterisks
        for (j = 0; j < n-i; j++) {
            printf(" ");
        }

        // Printing the asterisks
        for (k = 0; k <= i*2; k++) {
            printf("*");
        }

        // Moving to the next line
        printf("\n");
    }

    // Printing the tip of the diamond
    for (i = 0; i < n+1; i++) {
        printf("* ");
    }
    printf("\n");

    // Printing the lower half of the diamond
    for (i = n; i >= 0; i--) {
        // Printing spaces before the asterisks
        for (j = 0; j < n-i; j++) {
            printf(" ");
        }

        // Printing the asterisks
        for (k = 0; k <= i*2; k++) {
            printf("*");
        }

        // Moving to the next line
        printf("\n");
    }

    return 0;
}
