/* write a program to output difference type of litercy */
#include <stdio.h>
#include <conio.h>
void main()
{
	char ch = 'Z';
	char str[20] = "hello good morning";
	float flt = 10.263;
	double A, dbl = 20.185938;
	int no = 156;

	printf("character is %c", ch);
	printf("\nstring is  : %s ", str);
	printf("\n float value is : %f", flt);
	printf("\n Integer value is :%d", no);
	printf("\n DOuble value is : %f", dbl);
	printf("\n hexadecimal value is : %x", no);
	printf("\n Enter decimal number :");
	scanf("%d", &A);
	printf(" \nDecimal %d to hexadecimal: %x ", A, A);

	getch();
}
