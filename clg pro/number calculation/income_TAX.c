#include <stdio.h>

int main()
{
    int income, pay;
    printf("Enter amount you have earned ");
    scanf("%d", &income);
    float tax;
    if (income > 0)
        if (income <= 250000)
        {
            printf("\n\t\t\tYou don't have to pay any tax");
        }
        else if (income <= 500000)
        {
            pay = income - 250000;
            tax = pay * 0.05;
            printf("your tax on income is %f and total amount you get is %f", tax, income - tax);
        }
        else if (income <= 750000)
        {
            pay = income - 500000;
            tax = (pay * 0.10) + 12500;
            printf("your tax on income is %f and total amount you get is %f", tax, income - tax);
        }
        else if (income <= 1000000)
        {
            pay = income - 750000;
            tax = (pay * 0.20) + 37500;
            printf("your tax on income is %f and total amount you get is %f", tax, income - tax);
        }
        else if (income > 1000000)
        {
            pay = income - 1000000;
            tax = (pay * 0.30) + 112500;
            printf("your tax on income is %f and total amount you get is %f", tax, income - tax);
        }
        else
            printf("\n\t\t\tinvalid number");
    else
        printf("\n\t\t\tINVALID NUMBER");

    return 0;
}