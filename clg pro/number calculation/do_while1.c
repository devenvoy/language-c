#include <stdio.h>

int main()
{
    int b;
    int i = 0, c;

    do
    {
        printf("the value of i is %d\n", i);
        i++;
    } while (i < 10);
    printf("\nfrom where:");
    scanf("%d", &c);
    printf("\nto where:");
    scanf("%d", &b);

    do
    {
        printf("the value of c is %d\n", c);
        c++;
    } while (c <= b);

    return 0;
}
//