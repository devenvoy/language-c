/*
    A
    A B
    A B C
    A B C D
    A B C D E
*/
#include <stdio.h>

int main()
{
    char i, j;
    for (i = 65; i <= 69; i++)
    {
        for (j = 65; j <= i; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}