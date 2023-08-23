#include <stdio.h>

int main()
{
   
    int x, n;
    for (x = 0; x <= 10; x++)
    {
        if (x & 1) // if number is odd
            printf("\t\t\t%d is odd\n", x);
        else if (!(x & 1)) // ! is used inside if to reverse the boolean value
            printf("\t\t\t%d is even\n", x);
    }

    printf("Enter a number:  ");
    scanf("%d", &n);

    if ((n / 2) * 2 == n)
        printf("\n\n\t\t %d is Even\n", n);
    else
        printf("\n\n\t\t %d is Odd\n", n);
    return 0;
}