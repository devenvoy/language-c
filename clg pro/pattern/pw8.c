#include <stdio.h>
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d", &n);

    printf("Triangle ==>\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", j + 64);
        }
        printf("\n");
    }

    printf("Square ==>\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%c ", j + 64);
        }
        printf("\n");
    }

    return 0;
}