/****************************************************************************
  Prog.9 Write a Prog. to find Bigger Number from given any three no:-
****************************************************************************/
#include"stdio.h"
#include"conio.h"
void main()
{
	int a,b,c;
	clrscr();
	printf("enter any three no:-");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
	{
	  if (a>c)
	  {
	      printf("\n Bigger no is %d",a);
	  }
	  else
	  {
	      printf("\n Bigger no is %d",c);
	  }
	}
	else
	{
	    if (b>c)
	    {
		 printf("\n Bigger no is %d",b);
	    }
	    else
	    {
		  printf("\n Bigger no is %d",c);
	    }
	}
	getchar();
}