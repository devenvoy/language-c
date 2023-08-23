/* write a program to calculate area of circle when pi = 3.14 is fixed using define(constant)*/
#include <stdio.h>
#include <conio.h>
#define PI 3.14
void main()
{
	float r;
	printf("Enter radius :");
	scanf("%f", &r);
	printf("\nArea of circle will be :%f", PI * (r * r));

	getch();
}
