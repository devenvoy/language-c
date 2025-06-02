/****************************************************************************
 Pro.6 The Write a Program to calculate + | - | * | / as for the user choise
*****************************************************************************/
#include "stdio.h"

void main()
{
	int a,b,ch;
	clrscr();
	printf("enter any two no:-");
	scanf("%d%d",&a,&b);
	printf("\n*******************************************************************\n");
	printf("\t10.add.\t\t20.sub.\t\t30.mul.\t\t40.div.\n");
	printf("*******************************************************************\n");
	printf("enter your choice:-");
	scanf("%d",&ch);
	switch(ch)
	{
	case 10:printf("\n%d",a+b);
		break;
	case 20:printf("%d",a-b);
		break;
	case 30:printf("%d",a*b);
		break;
	case 40:printf("%5.2f",(float)a/(float)b);
		break;
	default:printf("\n Invalid Choice");
		break;
	}
	getchar();
}