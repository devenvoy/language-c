#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter  number 1 :");
    scanf("%d", &a);
    printf("\nEnter  number 2 :");
    scanf("%d", &b);

    c = a + b;
    a = c - a;
    b = c - b;

    printf("\n===========================\n");
    printf(" new value of a :%d", a);
    printf(" \nnew value of b :%d", b);

    return 0;
}