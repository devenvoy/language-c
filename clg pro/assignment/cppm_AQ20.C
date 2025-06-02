#include <stdio.h>


int main()
{
    int dec, re, var, binary = 0, i = 1;

    printf("\n\t Enter a decimal number :");
    scanf("%d", &dec);

    var = dec;
    while (dec != 0)
    {

        re = dec % 2;
        dec = dec / 2;
        binary = binary + (re * i);
        i = i * 10;
    }
    printf("\n\t Binary equivelent of %d id %d", var, binary);

    return 0;
}
