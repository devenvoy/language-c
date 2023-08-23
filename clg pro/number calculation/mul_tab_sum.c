
#include <stdio.h>

int main()
{
    int a, b, sum = 0, c;
    printf("\n\t*******multiplication table********");
    printf("\nwhich number of table you want:");
    scanf("%d", &a);
    for (b = 1; b < 11; b++)
    {
        // for in reverse order for (b = 10; b; b--)
        printf("\n\t%d x %d = %d", a, b, c = a * b);
        sum += c;
    }
    printf("\n\t sum of total number is :%d", sum);

    return 0;
}