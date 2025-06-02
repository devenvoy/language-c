/******************************************************************************
	   Prog.11  Write a program to calculate Sum of any to Nos..
*****************************************************************************/
# include "stdio.h"

int a,b;
void main()
{
 void scan(void);
 clrscr();
 printf ("Enter Two Nos.");
 scan();
 getchar();
 }

 void scan()
  {
   void sum(void);
   scanf("%d%d",&a,&b);
   sum();
  }

 void sum()
 {
  int p;
  p=a+b;
  printf("\n Sum is %d",p);
 }