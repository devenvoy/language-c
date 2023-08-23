#include <stdio.h>

int main()
{
    int i, j, n, k;
    printf("enter number of element :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = n; k > i; k--) // (k = 1 ; k <= n - i ; k++) gives same result
        {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++) // or take var(nst = 1) and j <= nst
        {                                // now add 2 every time when i increment
            printf("%c ",j+64);
        }
        printf("\n"); // nst += 2 ;
    }

    return 0;
}