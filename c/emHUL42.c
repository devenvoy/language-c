/*****************************************************************************
     Prog.13  Write a program to print following output.
        5 4 3 2 1
        5 4 3 2
        5 4 3
        5 4
        5
*****************************************************************************/
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
      printf(" %d ", b);
    }
    printf("\n\n");
  }
  getch();
}
