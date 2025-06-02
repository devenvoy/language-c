/****************************************************************************
	Prog.3  Write a program to print following series.
		 1.>>  2,4,6,8,..........20
		 2.>>  1,3,5,7,..........19
		 3.>>  19,17,15,..........1
		 4.>>  20,18,16,..........2
		 5.>>  1,2,3,4,..........10
		 6.>>  10,9,8,7,..........1
		 7.>>  1,0,1,0,1,..........(20 time)
		 8.>>  1,1,2,3,5,8,13,....55
*****************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
	int a, c, h, k, j;
	clrscr();
	for (a = 2; a <= 20; a = a + 2)
	{
		printf("%d ", a);
	}
	printf("\n\n");
	for (a = 1; a <= 19; a = a + 2)
	{
		printf("%d ", a);
	}
	printf("\n\n");
	for (a = 19; a >= 1; a = a - 2)
	{
		printf("%d ", a);
	}
	printf("\n\n");
	for (a = 20; a >= 2; a = a - 2)
	{
		printf("%d ", a);
	}
	printf("\n\n");
	for (a = 1; a <= 10; a = a + 1)
	{
		printf("%d ", a);
	}
	printf("\n\n");
	for (a = 10; a >= 1; a = a - 1)
	{
		printf("%d ", a);
	}
	printf("\n\n");
	for (a = 1; a <= 10; a = a + 1)
	{
		c = 1;
		printf("%d ", c);
		c = c - 1;
		printf("%d ", c);
	}
	printf("\n\n");
	h = 1;
	k = 1;
	printf("%d ", k);
	for (j = 1; j <= 55; j = h + k)
	{
		printf("%d ", j);
		k = h;
		h = j;
	}
	getch();
}
