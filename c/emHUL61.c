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
  do
  {
    b = 1;
    do
    {
      printf(" %d ", a);
      b++;
    } while (b <= a);
    a--;
    printf("\n\n");
  } while (a >= 1);
  getch();
}
