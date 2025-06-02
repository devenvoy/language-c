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
  a = 1;
  do
  {
    b = 5;
    do
    {
      printf(" %d ", b);
      b--;
    } while (b >= a);
    a++;
    printf("\n\n");
  } while (a <= 5);
  getch();
  return 0;
}