/*
    *
   ***
  *****
 *******
**********
 */

#include <stdio.h>
#include<conio.h>

 void main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    getch();
//    return 0;
}