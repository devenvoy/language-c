/**********************************************************
 Statement - Print All ASCII Values
 Programmer - Vineet Choudhary
 Written For - http://developerinsider.co
 **********************************************************/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 0;
    char ch;

    for (i = 1; i <= 255; i++)
    {
        printf("%d - %c \n ", i, ch);
        ch = ch + 1;
    }

    return 0;
}
