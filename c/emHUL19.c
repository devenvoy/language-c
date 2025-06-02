/*****************************************************************************
   Prog.8  Write a program to print following outputs.
     *
     * *
     * * *
     * * * *
     * * * * *
******************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
  int a, b;
  clrscr();
  a = 1;
  while (a <= 5)
  {
    b = 1;
    while (b <= a)
    {
      printf(" *");
      b++;
    }
    a++;
    printf("\n");
  }
  getch();
  return 0;
}
