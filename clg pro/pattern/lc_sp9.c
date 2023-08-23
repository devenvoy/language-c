/*
    A
    B C
    D E F
    G H I J
    K L M N O
*/

#include <stdio.h>

int main()
{
    char i, j, count = 'A';
    for (i = 'a'; i <= 'e'; i++)
    {
        for (j = 'a'; j <= i; j++)
        {
            printf("%c ", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}