#include <stdio.h>

int main()
{
    int n;
    printf("Enter number for rows :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = i - 1;
        for (int q = n; q > i; q--) // space
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) //  half number triangle
        {
            printf("%c ", j+64);
        }
        for (int k = 1; k <= i - 1; k++) // second half number triangle
        {
            printf("%c ", a+64);
            a--;
        }
        printf("\n");
    }
    return 0;
}