#include <stdio.h>
#include <conio.h>

void main()
{

    int number,
        remainder, sum = 0, fact = 1, original;
    printf("Enter the number:-\n");
    scanf("%d", &number);
    original = number;
    while (number != 0)
    {
        remainder = number % 10; // last value 
        for (int i = 1; i <= remainder; i++)

        {

            fact = fact * i; // calculate factorial
        }
        sum = sum + fact; // add factorial value of last digit
        number = number / 10; // remove last digit 
        fact = 1; // change again fact to 1;
    }
    if (original == sum) // both same then strong
    {
        printf(" %d is Strong Number ",original);
    }
    else
    {
        printf("%d is Not Strong Number", original);
    }

    getch();
}