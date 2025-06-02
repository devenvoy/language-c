/*****************************************************************************
     Prog.15  Write a program to print following output.
        1 2 3 4 5
        1 2 3 4
        1 2 3
        1 2
        1
*****************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
  int a, b;
  clrscr();
  for (a = 5; a >= 1; a--)
  {
    for (b = 1; b <= a; b++)
    {
      printf(" %d ", b);
    }
    printf("\n\n");
  }
  getch();
}
