/****************************************************************************
     Prog.10  Write a program to print following output.
	     1
	     2 2
	     3 3 3
	     4 4 4 4
	     5 5 5 5 5
*****************************************************************************/
# include "stdio.h"
# include "conio.h"
void main()
{
 int a,b;
 // clrscr();
 a=1;
 while (a<=5)
   {
   b=1;
   while(b<=a)
     {
      printf(" %d ",a);
      b++;
      }
    a++;
    printf("\n\n");
    }
  getch();
 }
