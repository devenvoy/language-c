/*
WRITE A PROGRAM TO GENERATE FOLLOWING SERIES 
FIBONACCI , INPUT  n = 5;
            OUTPUT  0 , 1 , 1 , 2 , 3 , 5

*/
#include <stdio.h>
#include <conio.h>

void main()
{
    int a1 = 0, a2 = 1, n, next;

    printf("Enter the number of SERIES:");
    scanf("%d", &n);
    printf("\n%d , %d , ", a1, a2); // print
    next = a1 + a2;
    while (next <= n)
    {
        printf("%d , ", next);
        a1 = a2;
        a2 = next;
        next = a1 + a2;
    }

    getch();
    // return 0 ;
}