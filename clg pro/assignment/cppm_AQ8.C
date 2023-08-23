/*
WRITE A PROGRAM TO DISPLAY CHARACTER FROM A TO Z USING LOOP
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int k, j;
    char i = 0;

    for (k = 65; k <= 90; k++)
    {
        i = k;
        printf("%c ", i);
    }

    //getch();
     return 0 ;
}
