#include <stdio.h>

int main()
{

    // while loop with continue
    int skip = 5, i = 0;
    while (i < 10)
    {
        i++;
        if (i == skip)
        {
            continue;
        }
        else
        {
            printf("%d\n", i);
        }
    }

    // for loop with continue

    for (int a = 1; a < 10; a++)
    {
        if (a == 7)
            continue;
        printf("%d\n", a);
    }

    return 0;
}