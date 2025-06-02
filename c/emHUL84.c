/****************************************************************************
	   Prog.10  Write a program to calculate Sum of any to Nos..
*****************************************************************************/
# include "stdio.h"

int a,b;
void main()
{
 void add(void);
 clrscr();
 printf ("Enter Two Nos.");
 scanf ("%d %d",&a,&b);
 add();
 getchar();
 }

 void add()
  {
   int p;
   p=a+b;
   printf ("\nSum is %d",p);
  }