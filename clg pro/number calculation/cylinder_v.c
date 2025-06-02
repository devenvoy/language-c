// find area of a circle and find volume of cylinder
#include <stdio.h>

#define pi 3.14
int main()
{
    float a, h, c, area, volume;
    printf("Enter radius of a circle(m)"); // a for radius
    scanf("%f", &a);
    area = pi * a * a; // radius = r*r
    printf("\narea of circle is :%f", area);
    printf("\n\nEnter height of a cylinder :"); // h for height
    scanf("%f", &h);
    volume = area * h;  // volume = pi(3.14)r*r*h
    c = 2 * pi * a * h; // 2*pi*r*h

    printf("\n\nvolume of cylinder is %f m^2 \n\t\t and surface of cylinder is %f ", volume, c);

    return 0;
}