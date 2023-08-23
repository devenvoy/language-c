/****************************************************************************
Pro.7 Write a Prog. to Check whether given No.Odd & Even.
****************************************************************************/
#include"stdio.h"
#include"conio.h"
void main()
{
	int n,r;
	clrscr();
	printf("enter any no:-");
	scanf("%d",&n);
	r=n%2;
	if (r==0)
	{
		printf("\n No. is Even");
	}
	else
	{
		printf("\n No. is Odd");
	}
	getch();
}