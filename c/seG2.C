/* pro.2 To Calculate Bonus as 15% as for the given Salary */
#include"stdio.h"
#include"conio.h"
void main()
{
	int sal;
	float bon=0;
	clrscr();
	printf ("\n\n");
	printf("\tenter salary:-");
	scanf("%d",&sal);
	if (sal>=5000)
	{
		bon=sal*.15;
	}
	printf("\n\t----------------------");
	printf("\n\t Bonus is %5.2f",bon);
	printf("\n\t----------------------");
	getchar();
}