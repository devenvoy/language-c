/*
WRITE A PROGRAM TO REVERSE A NUMBER 
INPUT n = 1345
OUTPUT 5431
*/
#include <stdio.h>
#include<conio.h>

void main()
{

    int n, r;
    printf("Enter any number :");
    scanf("%d", &n);

    while (n > 0)
    {
        r = n % 10;
        printf("%d", r);
        n = n / 10;
    }

    getchar();
  //  return 0;
}