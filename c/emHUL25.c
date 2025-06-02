/*****************************************************************************
     Prog.14  Write a program to print following output.
        5 5 5 5 5
        4 4 4 4
        3 3 3
        2 2
        1
*****************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
  int a, b;
  clrscr();
  a = 5;
  while (a >= 1)
  {
    b = 1;
    while (b <= a)
    {
      printf(" %d ", a);
      b++;
    }
    a--;
    printf("\n\n");
  }
  getch();
}
