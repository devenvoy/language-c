/*
     1
    8 27
  64 125 216
*/
#include <stdio.h>

int main()
{
    int k, i, j, sum = 1, cube = 1;

    for (i = 1; i <= 3; i++)
    {
        for (k = 3; k > i; k--)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d ", cube);
            sum++;
            cube = sum * sum * sum;
        }
        printf("\n");
    }

    return 0;
}