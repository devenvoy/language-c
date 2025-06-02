/*  WRITE A PROGRAM TO FIND GCD AND LCM OF TWO NUMBER */

#include <stdio.h>


int main()
{

    int n1, n2, x, y, lcm, gcd;

    printf("Enter number 1:");
    scanf("%d", &n1);
    printf("Enter number 2:");
    scanf("%d", &n2);
    x = n1;
    y = n2;

    while (n1 != n2)
    {
        if (n1 > n2)
        {
            n1 = n1 - n2;
        }
        else
        {
            n2 = n2 - n1;
        }
    }
    printf("GCD = %d", n1);

    gcd = n1;

    lcm = (x * y) / gcd;

    printf("\n LCM = %d", lcm);

    //getchar();
    return 0;
}