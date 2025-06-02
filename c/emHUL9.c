/****************************************************************************
  Prog.9  Write a program to take marks of three subject and Calculate
     Total mark and Percentage.As well as print Gread.
      >= 70%        "DISTRINCTION"
      >= 60% & <70% "FIRST CLASS"
      >= 50% & <60% "SECOND CLASS"
      >= 35% & <50% "PASS CLASS"
          <35% "FAIL"
*****************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
   int a, b, c, t;
   float p;
   clrscr();
   printf("\nEnter Sub.1 Marks:");
   scanf("%d", &a);
   printf("\nEnter Sub.2 Marks:");
   scanf("%d", &b);
   printf("\nEnter Sub.3 Marks:");
   scanf("%d", &c);
   t = a + b + c;
   printf("\n Total Marks = %d", t);
   p = float(t) / 300 * 100;
   printf("\n Percentage is %f %", p);

   if (p >= 70)
   {
      printf("\n DISTRINCTION");
   }
   if ((p >= 60) && (p < 70))
   {
      printf("\n FIRST CLASS");
   }
   if ((p >= 50) && (p < 60))
   {
      printf("\n SECOND CLASS");
   }
   if ((p >= 35) && (p < 50))
   {
      printf("\n PASS CLASS");
   }
   else if (p < 35)
   {
      printf("\n YOU ARE FAIL");
   }
   getch();
}