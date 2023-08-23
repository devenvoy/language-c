#include <stdio.h>
#include <conio.h>

void main()

{

    int first, last, number, sum = 0;
    printf("Enter the number:-\n");
    scanf("%d", &number);
    int original = number;
    last = number % 10;
    while (number >= 10)
    {
        number = number / 10;
    }
    first = number;

    sum = first + last;
    printf("The Sum of First And Last digit of the %d : %d", original, sum);

    getch();
}