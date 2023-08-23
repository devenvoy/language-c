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
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}