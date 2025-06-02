#include <stdio.h>

void main()
{

    int number, new_generated = 0, reverse = 0, remainder;

    printf("Enter the number for generating the new number:- ");
    scanf("%d", &number);

    while (number != 0)
    {
        remainder = number % 10 + 1;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }
    printf(" The New generated number is %d", reverse);
    while (reverse != 0)
    {
        remainder = reverse % 10;
        new_generated = new_generated * 10 + remainder;
        reverse = reverse / 10;
    }
    printf(" The New generated number is %d", new_generated);

    getchar();
    return 0;
}