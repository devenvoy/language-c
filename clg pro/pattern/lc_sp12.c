// print any string into loop ex:- RAM
/*
    R
    R A
    R A M
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "INDIA";
    int i, j, len;
    len = strlen(str);
    // printf("%d\n", len);

    for (i = 0; i < len; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c ", str[j]);
        }
        printf("\n");
    }

    return 0;
}