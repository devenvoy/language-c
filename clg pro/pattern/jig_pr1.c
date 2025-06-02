#include <stdio.h>
#include<conio.h>

int main()
{
    int a, b, c, d;
    for (a = 5; a >= 1; a--)
    {
        for (b = a; b <= 5; b++)
        {
            printf("%d", a);
        }
        for (c = a; c >= 1; c--)
        {
            printf(" ");
        }
        for (d = 1; d <= a; d++)
        {
            printf("%d", d);
        }
        for (c = a; c <= 5; c++)
        {
            printf(" ");
        }
       printf("\n");
    }
    for (a = 1; a <= 5; a++)
    {
        for (c = a; c <= 5; c++)
        {
            printf(" ");
        }
        for (d = a; d >= 1; d--)
        {
            printf("%d", d);
        }
        for (c = a; c >= 1; c--)
        {
            printf(" ");
        }
        for (b = a; b <= 5; b++)
        {
            printf("%d", a);
        }
        printf("\n");
    }
        getchar();
        return 0;
}