// Write a C Program to find Sum of Series 1²+2²+3²+…..+n² Using Recursion.
#include <stdio.h>

int sumos(int n)
{
    int sum = 0;
    if (n == 1)
    {
        printf("%d", n);
        return (sum + n * n);
    }
    else
    {
        printf("%d + ", n*n);
        return (sum + n * n) + sumos(n - 1);
    }
}

int main()
{
    int num;

    printf("Enter last number of the sequence:");
    scanf("%d", &num);
    printf("Sum of ");
    printf(" = %d", sumos(num));
}