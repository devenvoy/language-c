/****************************************************************************
      Prog.8  Write a program to Bigger number from given three two Nos..
*****************************************************************************/
# include "stdio.h"
# include "conio.h"
void main()
{
   int a,b,c;
  // clrscr();
   printf("\nEnter Any Three Nos.:");
   scanf ("%d%d%d",&a,&b,&c);
   if (a > b)
      {
      if (a > c)
	{
	printf ("\n Bigger No. is %d",a);
	}
      else
	{
	printf ("\n Bigger No. is %d",c);
	}
      }
   else
      {
      if (b > c)
	{
	printf ("\n Bigger No. is %d",b);
	}
      else
	{
	printf ("\n Bigger No. is %d",c);
	}
      }
   getch();
}