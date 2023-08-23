// count digit of number given by user

#include <stdio.h>

int main()
{

    int n, count = 0, s;
    printf("Enter any digit  number :");
    scanf("%d", &n);
    s = n;

    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    printf(" digit of %d is : %d", s, count);

    return 0;
}