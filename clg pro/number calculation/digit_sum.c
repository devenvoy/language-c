// sum of digits of number given by user
#include <stdio.h>

int main()
{

    int n, r, sum;
    printf("Enter any number :");
    scanf("%d", &n);

    while (n > 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    printf(" sum of number's digits : %d", sum);

    return 0;
}