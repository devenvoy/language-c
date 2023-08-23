//  STAR DIAMOND
#include <stdio.h>

int main()
{
    int i, j, n, k;
    printf("enter number of element :");
    scanf("%d", &n);
    int nsp = n / 2;    // NUMBER OF SPACE
    int nst = 1;        // NUMBER OF STAR
    int ml = n / 2 + 1; // MIDDLE LINE
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= nsp; k++)
        {
            printf("  ");
        }
        for (j = 1; j <= nst; j++) // var(nst = 1) and j <= nst
        {                          //  now add 2 star every time when i increment
            printf("* ");          //   and remove space UNIL it reach middle line
        }
        if (i < ml)
        {
            nsp--;
            nst += 2;
        }                // if diamond reach middle line
        else             //  now remove 2 star every time when i increment
        {                //   and add spaces
            nsp++;
            nst -= 2;
        }
        printf("\n"); // nst += 2 ;
    }

    return 0;
}