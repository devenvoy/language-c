/*****************************************************************************
     Prog.11  Write a program to print following output.
        1
        2 1
        3 2 1
        4 3 2 1
        5 4 3 2 1
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
    for (b = a; b >= 1; b--)
    {
      printf(" %d ", b);
    }
    printf("\n\n");
  }
  getch();
}
