/*****************************************************************************
     Prog.12  Write a program to print following output.
         * * * * *
         * * * *
         * * *
         * *
         *
******************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
  int a, b;
  clrscr();
  for (a = 1; a <= 5; a++)
  {
    for (b = 5; b >= a; b--)
    {
      printf(" * ");
    }
    printf("\n\n");
  }
  getch();
  return 0;
}
