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
  for (a = 1; a <= 5; a++)
  {
    for (b = 1; b <= a; b++)
    {
      printf(" * ");
    }
    printf("\n\n");
  }
  getch();
}
