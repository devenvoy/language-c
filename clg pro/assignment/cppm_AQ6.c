//  Armstrong number is a number that is equal to the sum of cubes of its digits.
//  For Example  0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
// 153 ---> 1*1*1 + 5*5*5 + 3*3*3 = 1 + 125 + 27 = 153
// 1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634, 8208, 9474, 54748, ... (etc.)

#include <stdio.h>
#include<conio.h>

void main()
{

    int c, n, r, arm = 0;
    printf("Enter any number :");
    scanf("%d", &n);
    c = n;
    while (n > 0)
    {
        r = n % 10;
        arm = (r * r * r) + arm;
        n = n / 10;
    }
    if (c == arm)
    {
        printf(" %d is Armstrong number ", c);
    }
    else
    {
        printf(" %d is not Armstrong number", c);
    }

   getchar();
   // return 0;
}
