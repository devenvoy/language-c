/****************************************************************************
    Prog.5  Write a program to calculate  + , - , * and \ as for
       the user choice.
*****************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
   int a, b, ch;
   clrscr();
   printf("\nEnter Any Two Nos.:");
   scanf("%d%d", &a, &b);
   printf("\n 10.Add \n 20.Subs.");
   printf("\n 30.Mult \n 40.Div.\n");
   printf("Enter Your Choice :");
   scanf("%d", &ch);
   switch (ch)
   {
   case 10:
      printf("\n %d", a + b);
      break;
   case 20:
      printf("\n %d", a - b);
      break;
   case 30:
      printf("\n %d", a * b);
      break;
   case 40:
      printf("\n %f", (float)a / (float)b);
      break;
   default:
      printf("\n Invalid Choice");
      break;
   }
   getch();
   return 0;
}