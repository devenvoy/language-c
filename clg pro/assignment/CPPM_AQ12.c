/*
WRITE A PROGRAM THAT WILL SEARCH AN ELEMENT IN 1-D ARRAY AND 
IF IT IS FOUND THAN DISPLAY THE POSITION OF IT IN THE ARRAY.
*/

#include <stdio.h>

int main()
{
    int a[50], i, n, c,  s;
    printf("How many elements:");
    scanf("%d", &n);
    printf("Enter the Array:");

    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    printf(" Enter search value :");
    scanf("%d", &c);

    s = -1;
    for (i = 0; i < n; ++i)
    {
        if (a[i] == c)
        {
            s = i;
            printf(" search value is on index %d \n", i);
        }
    }

    if (s == -1)
        printf(" Search value is invalid or not available in array ");

    return 0;
}