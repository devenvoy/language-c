/****************************************************************************
	   Prog.9  Write a program to calculate Sum of any to Nos..
*****************************************************************************/
# include "stdio.h"

int a,b;
void main()
{
 int c;
 int add(void);
 clrscr();
 printf ("Enter Two Nos.");
 scanf ("%d %d",&a,&b);
 c=add();
 printf ("\nSum is %d",c);
 getchar();
 }

 int add()
 {
  int p;
  p=a+b;
  return (p);
 }