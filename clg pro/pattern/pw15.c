// ZERO & ONE TRIANGLE

#include <stdio.h>

int main()
{
    int i, j, n, a;
    printf("enter number of element :");
    scanf("%d", &n);
    // for (i = 1; i <= n; i++)
    // {
    //     if (i % 2 != 0) // woth use of variable to add/change value
    //         a = 1;
    //     else
    //         a = 0;
    //     for (j = 1; j <= i; j++)
    //     {
    //         printf("%d ", a);
    //         if (a == 0)
    //             a = 1;
    //         else
    //             a = 0;
    //     }        printf("\n");
    //}

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}