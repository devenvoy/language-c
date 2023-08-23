#include <stdio.h>
#include <conio.h>

int main()
{
    int a, i, b, flag = 0;
    // clrscr();
    printf("Enter number to check: ");
    scanf("%d", &a);
    b = a / 2;
    for (i = 2; i <= b; i++)
    {
        if (a % i == 0)
        {
            printf("not prime");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("prime");
    }
    return 0;
}