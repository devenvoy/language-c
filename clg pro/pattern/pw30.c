#include <stdio.h>

int main()
{
    int i, j, n, k;
    printf("enter number of element :");
    scanf("%d", &n);
    int nst = n;
    int nsp = 1;
    int min;
    for (i = 1; i <= 2 * n - 1; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            int a = i;
            if (i > n)
                a = 2 * n - i;
            int b = j;
            if (b > n)
                b = 2 * n - j;
            if (a < b)
                min = a;
            else
                min = b;
            printf("%d ",min);
        }
        printf("\n");
    }

    return 0;
}