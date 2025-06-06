/****************************************************************************
	Prog.3  Write a program to print following series.
		 1.>>     2,4,6,8,..........20
		 2.>>     1,3,5,7,..........19
		 3.>>     19,17,15,..........1
		 4.>>     20,18,16,..........2
		 5.>>     1,2,3,4,..........10
		 6.>>     10,9,8,7,..........1
		 7.>>     1,0,1,0,1,..........(20 time)
		 8.>>     1,1,2,3,5,8,13,....55
*****************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
	int a, c, h, k, j;
	clrscr();
	a = 2;
	printf("\nPrint Different Series between 1 to 20 >>    ");
	printf("\n\n");
	printf("Even numbers: >>   ");
	while (a <= 20) // even
	{
		printf("%d ", a);
		a = a + 2;
	}
	printf("\n\n");
	printf("ODD numbers: >>   ");
	a = 1;
	while (a <= 19) // ODD
	{
		printf("%d ", a);
		a = a + 2;
	}
	printf("\n\n");
	printf("Reverse ODD numbers: >>   ");
	a = 19;
	while (a >= 1) // REVERSE ODD
	{
		printf("%d ", a);
		a = a - 2;
	}
	printf("\n\n");
	printf("Reverse Even numbers: >>   ");
	a = 20;
	while (a >= 2) // REVERSE EVEN
	{
		printf("%d ", a);
		a = a - 2;
	}
	printf("\n\n");
	printf("1 to 10 numbers: >>   ");
	a = 1;
	while (a <= 10) // 1 TO 10
	{
		printf("%d ", a);
		a = a + 1;
	}
	printf("\n\n");
	printf("10 to 1 numbers: >>   ");
	a = 10;
	while (a >= 1) // 10 TO 0
	{
		printf("%d ", a);
		a = a - 1;
	}
	printf("\n\n");
	printf("Alternate 0 & 1 numbers: >>   ");
	a = 1;
	while (a <= 10) // PRINT 0 1 0 1 0 1
	{
		c = 1;
		printf("%d ", c);
		c = c - 1;
		printf("%d ", c);
		a = a + 1;
	}
	printf("\n\n");
	printf("FIBONACCI SERIES numbers: >>   ");
	h = 1;
	k = 1;
	j = 0;
	printf("%d ", h);
	printf("%d ", k);
	while (j <= 34) // FIBONACCI SERIES

	{
		j = h + k;
		printf("%d ", j);
		k = h;
		h = j;
	}
	getch();
	return 0;
}
