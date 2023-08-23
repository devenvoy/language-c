#include <stdio.h>

int main()
{
   float radius ;
    float pi = 3.14;
    float height;
     printf("Enter radius of the circle:");
     scanf("%f" , &radius);
     printf("Enter heigh of the cylinder:");
     scanf("%f" , &height);
         
    printf("The area of this circle is %f\n", pi * radius * radius);    

    printf("Volume of this cylinder is %f\n", pi * radius * radius * height);
    return 0;
}