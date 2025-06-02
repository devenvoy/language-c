/*****************************************************************************
     Prog.16  Write a program to print following output.
        5 4 3 2 1
        4 3 2 1
        3 2 1
        2 1
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
  do
  {
    b = a;
    do
    {
      printf(" %d ", b);
      b--;
    } while (b >= 1);
    a--;
    printf("\n\n");
  } while (a >= 1);
  getch();
  return 0;
}