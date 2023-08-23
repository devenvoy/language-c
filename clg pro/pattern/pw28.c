#include <stdio.h>

int main()
{
    int i, j, n, k;
    printf("enter number of element :");
    scanf("%d", &n);
    int nst = n;
    int nsp = 1;
    for (int q = 1; q <= 2 * n + 1; q++)
    {
        printf("%c ", q + 64);
    }
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        int a = 1;
        for (j = 1; j <= nst; j++)
        {
            printf("%c ", a + 64);
            a++;
        }
        for (k = 1; k <= nsp; k++)
        {
            printf("  ");
            a++;
        }
        for (j = 1; j <= nst; j++)
        {
            printf("%c ", a + 64);
            a++;
        }
        nst--;
        nsp += 2;
        printf("\n");
    }

    return 0;
}