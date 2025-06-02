/***************************************************************************
  Prog.8 Write a Prog. to find Bigger Number from given two no:-
****************************************************************************/
#include"stdio.h"
#include"conio.h"
void main()
{
	int a,b;
	clrscr();
	printf("enter any two nos:-");
	scanf("%d%d",&a,&b);
	if (a>b)
	{
		printf("\n Bigger No. is %d",a);
	}
	else
	{
		printf("\n Bigger No. is %d",b);
	}
	getchar();
}