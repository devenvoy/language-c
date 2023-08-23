/****************************************************************************
	Prog.3  Write a program to print following series.
		 1.>>  2,4,6,8,..........20
		 2.>>  1,3,5,7,..........19
		 3.>>  19,17,15,..........1
		 4.>>  20,18,16,..........2
		 5.>>  1,2,3,4,..........10
		 6.>>  10,9,8,7,..........1
		 7.>>  1,0,1,0,1,..........(20 time)
		 8.>>  1,1,2,3,5,8,13,....55
*****************************************************************************/
# include "stdio.h"
# include "conio.h"
void main()
{
 int a,c,h,k,j;
 clrscr();
 a=2;
 do
   {
    printf("%d ",a);
    a=a+2;
   }
    while (a<=20);
 printf("\n\n");
 a=1;
 do
   {
    printf("%d ",a);
    a=a+2;
   }
    while (a<=19);
 printf("\n\n");
 a=19;
 do
   {
    printf("%d ",a);
    a=a-2;
   }
    while (a>=1);
 printf("\n\n");
 a=20;
 do
   {
    printf("%d ",a);
    a=a-2;
   }
    while (a>=2);
 printf("\n\n");
 a=1;
 do
   {
    printf("%d ",a);
    a=a+1;
   }
    while (a<=10);
 printf("\n\n");
 a=10;
 do
   {
    printf("%d ",a);
    a=a-1;
   }
    while (a>=1);
 printf("\n\n");
 a=1;
 do
   {
    c=1;
    printf("%d ",c);
    c=c-1;
    printf("%d ",c);
    a=a+1;
   }
    while (a<=10);
 printf("\n\n");
 h=1;
 k=1;
 j=0;
 printf("%d ",h);
 printf("%d ",k);
 do
  {
   j=h+k;
   printf("%d ",j);
   k=h;
   h=j;
  }
  while(j<=34);
  getch();
}