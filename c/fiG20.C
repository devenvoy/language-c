// Pro.20 Write a Program to following output :
#include"stdio.h"
#include"conio.h"
void main()
{
	int a,b;
	clrscr();
	b=1;
	while (b<=5)
	{
		a=1;
		while (a<=b)
		{
			printf("*");
			a++;
		}
		b++;
		printf("\n");
	}
	getchar();
}
