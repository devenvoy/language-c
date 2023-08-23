// find the gretest number from four integer
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("\n\t\t\t ## Enter four integer number ## ");
    printf("\n\t\t\t1.");
    scanf("%d", &a);
    printf("\t\t\t2.");
    scanf("%d", &b);
    printf("\t\t\t3.");
    scanf("%d", &c);
    printf("\t\t\t4.");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
        printf(" \n\t\t\t%d is greater than other numbers", a);
    else if (b > c && b > d && b > a)
        printf(" \n\t\t\t%d is greater than other numbers", b);
    else if (c > d && c > a && c > d)
        printf(" \n\t\t\t%d is greater than other numbers", c);
    else
        printf("\n\t\t\t %d is greater than other numbers", d);
    return 0;
}