// convert temprature  celcius to farenheit
// convert temprature   farenheit to celcius
// formula f=(c*(9/5))+32
#include <stdio.h>

int main()
{
    float cel, far;
    int tem;
    printf("\n\t\t\t**************************************");
    printf("\n\t\t\t\tyour temprature type is ");
    printf("\n\t\t\t**************************************");
    printf("\n\t\t\t1.Celcius");
    printf("\n\t\t\t2.Farenheit");
    printf("\n\t\t\t Enter your choice :");
    scanf("%d", &tem);
    switch (tem)
    {
    case 1:

        printf("\n\n\t\tEnter temprature in celcius:");
        scanf("%f", &cel);
        far = (cel * 9 / 5) + 32;
        printf(" temprature in farenheit is:%f", far);

        break;
    case 2:

        printf("\n\n\t\tEnter temprature in Farenheit:");
        scanf("%f", &far);
        cel = (far - 32) * 0.5559;
        printf(" temprature in celcius is:%f", cel);

        break;

    default:
        printf("\n\n\t\t\t INVALID CHOICE");
    }

    return 0;
}