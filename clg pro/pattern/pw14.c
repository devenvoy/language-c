#include <stdio.h>

int main()
{
    int i, j, n, count = 1;
    printf("enter number of element :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", count);
            count += 2;
        }
        printf("\n");
    }
    return 0;
}