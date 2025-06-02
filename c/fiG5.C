/***************************************************************************
 Pro.5 Write a Pro. to Check whether given no is Positive or Negetive & zero
****************************************************************************/
#include"stdio.h"
#include"conio.h"
void main()
{
 int n;
 clrscr ();
 printf ("enter any no:-");
 scanf ("%d",&n);
 if (n==0)
 {
	printf("\n No. is Zero ");
 }
 else
 {
	if (n>0)
	{
		printf ("\n No is Positive");
	}
	else
	{
		printf ("\n No is Negetive");
	}
 }
 getchar();
}

