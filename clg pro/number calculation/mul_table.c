
/* print multiplication table of given number n
 in accend and decend order
 for in reverse order for (b = 10; b; b--)
        ans=a*b ;printf("%d",ans);
*/
#include <stdio.h>

int main()
{
    int a, b;
    printf("\n\t*******multiplication table********");
    printf("\nwhich number of table you want:");
    scanf("%d", &a);
    for (b = 1; b < 11; b++)
    {
        printf("\n\t%d x %d = %d", a, b, a * b);
    }
    return 0;
}