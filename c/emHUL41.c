/*****************************************************************************
     Prog.12  Write a program to print following output.
	       * * * * *
	       * * * *
	       * * *
	       * *
	       *
******************************************************************************/
# include "stdio.h"
# include "conio.h"
void main()
{
 int a,b;
 clrscr();
 for(a=1;a<=5;a++)
   {
    for(b=5;b>=a;b--)
     {
      printf(" * ");
     }
    printf("\n\n");
   }
  getch();
 }
