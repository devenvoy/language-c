// A number which it reverse and itself are eual
// so it called palidrome number
// Ex:- 1221--> 1221

#include <stdio.h>

int main()
{

    int c, n, r, sum = 0;
    printf("Enter any number :");
    scanf("%d", &n);
    c = n;
    while (n > 0)
    {
        r = n % 10;
        sum = r + (sum * 10);
        n = n / 10;
    }
    if (c == sum)
    {
        printf(" %d is palindrome number ", c);
    }
    else
    {
        printf(" %d is not palindrome number", c);
    }

    return 0;
}