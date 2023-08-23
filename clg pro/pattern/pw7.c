#include <stdio.h>
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d", &n);

    printf("Triangle ==>\n");
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a = a + 2;
        }
        printf("\n");
    }

    printf("Square ==>\n");

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= 2 * n - 1; j += 2)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}