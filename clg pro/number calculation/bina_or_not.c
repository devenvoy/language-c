#include <stdio.h>
#include <conio.h>

void main()
{
    long int num , ori = 0;
    int rem,  count = 0, num_count = 0;

    printf(" Enter a binary Number : ");
    scanf("%d", &num);
    ori=num;
    while (num != 0)
    {
        rem = num % 10;
        num_count++;
        if (rem == 0 || rem == 1)
        {
            count++;
        }
        else
        {
            break;
        }
        num = num / 10;
    }

    if(num_count == count)
    {
        printf(" %d is IN BINARY number format ", ori);
    }
    else
    {
        printf(" %d  is NOT in BINARY number format", ori);
    }

    getch();
    // return 0 ;
}