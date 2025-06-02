/****************************************************************************
  Prog.11  Write a program to calculate Bonus as for the Gread given below.
       >= 50000          30%
       >= 30000 & <50000  20%
       >= 15000 & <30000  15%
            <15000  12%
****************************************************************************/
#include "stdio.h"

void main()
{
   int a;
   float t, bon = 0;
   // clrscr();
   printf("\nEnter Salary:");
   scanf("%d", &a);
   if (a >= 50000)
   {
      bon = a * 0.30;
   }
   if ((a >= 30000) && (a < 50000))
   {
      bon = a * 0.20;
   }
   if ((a >= 15000) && (a < 30000))
   {
      bon = a * 0.15;
   }
   else if (a < 15000)
   {
      bon = a * 0.12;
   }
   printf("\n Bonus is %f", bon);
   t = a + bon;
   printf("\n\t Total amount is =%f", t);

   getchar();
   return 0;
}
