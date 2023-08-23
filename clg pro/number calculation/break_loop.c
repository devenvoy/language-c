#include <stdio.h>

int main()
{
    // do while loop with break statment

    int a, i = 0;

    do
    {
        printf("%d\n", i);

        if (i == 4)
        {
            break;
        }
        i++;
    } while (i < 45);

// for loop with break statement

    for (int a = 1; a < 100; a++)
    {
        if (a == 7)//if (a!=7) it only print 7 and skip other
            break;
        printf("%d\n", a);
    }

    return 0;
}