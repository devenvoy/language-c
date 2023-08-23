#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int fl, ll, count = 0, sum = 0, rem, result, original;

    printf(" \nEnter first limit : ");
    scanf("%d", &fl);
    printf(" \nEnter last limit : ");
    scanf("%d", &ll);

    for (int i = fl; i <= ll; i++)
    {
        original = i;
        while (original != 0)
        {
            original = original / 10;
            count++;
        }
        original = i;
        while (original != 0)
        {
            rem = original % 10;
            result = pow(rem, count);
            sum = sum + result;
            original = original / 10;
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
        sum = 0;
        count = 0;
    }
    getch();
}
