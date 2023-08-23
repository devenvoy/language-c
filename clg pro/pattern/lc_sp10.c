/*
    A
    B B
    C C C
    D D D D
    E E E E E
*/
#include <stdio.h>

int main()
{
    char i, j;
    for (i = 65; i <= 69; i++)
    {
        for (j = 65; j <= i; j++)
        {
            printf("%c ", i);
        }
        printf("\n");
    }
    return 0;
}