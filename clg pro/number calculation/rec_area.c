/* area of an rectangle*/

#include <stdio.h>

int main()
{
    float a, b, area;
    printf("Enter lenght(m) of rectangle :");
    scanf("%f", &a);
    printf("\n Enter width(m) of rectangle: ");
    scanf("%f", &b);
    area = a * b;
    printf("\n\n\t\t\tarea of rectangle is :%f m^2", area);

    return 0;
}