/*
--> A number That its all smaller product sum is Equal to number itself

    Ex:-   6 = 1+2+3 and  1 2 3 is smaller product of number and its sum = number itself
*/
#include <stdio.h>

int main()
{
    int sum = 0, i, n;
    printf("enter number of element :");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
     if (sum == n)
        {
            printf(" \n Perfect Number ");
        }
        else
        {
            printf(" Not A Perfect number ");
        }
    return 0;
}