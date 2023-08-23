/*
    *
   + +
  * * *
 + + + +
* * * * *
*/
#include <stdio.h>

int main()
{
    int k, i, j;

    for (i = 1; i <= 5; i++)
    {
        for (k =5 ; k > i; k--)
        {
            printf(" ");
         }

        for (j = 1; j <= i; j++)
        {
           if (i % 2 == 0)
                printf("+ ");
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}