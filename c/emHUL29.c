/****************************************************************************
     Prog.18  Write a program to print following output.
	      1
	      2  3
	      4  5  6
	      7  8  9  10
	      11 12 13 14 15
*****************************************************************************/
# include "stdio.h"
# include "conio.h"
void main()
{
 int a,b,c;
//  clrscr();
 a=1;
 c=1;
 while (a<=5)
   {
   b=1;
   while(b<=a)
     {
      printf(" %d ",c);
      b++;
      c++;
      }
    a++;
    printf("\n\n");
    }
  getch();
 }
