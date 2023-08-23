#include <stdio.h>

int main()
{
    float km, m, inch, feet, cm;

    printf("Enter Kilometer:");
    scanf("%f", &km);

    m = 1000 * km;
    feet = m * 3.33;
    inch = feet * 12;
    cm = m * 100;

    printf("\n kilometer = %.2f", km);
    printf("\n  meter = %.2f", m);
    printf("\n feet = %.2f", feet);
    printf("\n inch = %.2f", inch);
    printf("\n centimeter = %.2f", cm);

    return 0;
}