/*
WRITE A PROGRAM TO FIND THE FACTORIAL OF A NUMBER 
FAC(5)= 1 X 2 X 3 X 4 X 5 = 120 
*/




#include <stdio.h>
#include<conio.h>

void main()
{
    int i, n, factorial = 1;
    printf("\n\t ********Enter a number to find FECTORIAL********\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // ex; fac(5) = 1 x 2 x 3 x 4 x 5 = 120
    {
        factorial *= i;
    }
    printf("The Fac(%d) = %d", n, factorial);

    getch();
    // return 0;
}