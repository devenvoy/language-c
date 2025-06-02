/*
1
23
456
78910
*/

#include <stdio.h>
#include<conio.h>

void main()
{
    int i, j,sum=1;
    for (i = 1; i <= 4; i++) // for rows
    {
        for (j = 1; j <= i; j++) // for columns
        {
            printf("%d" , sum);
            sum++;
        }
        printf("\n");
    }

    getchar();
    //return 0;
}