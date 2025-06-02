/****************************************************************************
    Prog.2  Write a program to print Odd No. series till 19.
*****************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
  int a;
  clrscr();
  for (a = 1; a <= 19; a = a + 2)
  {
    printf(" %d ", a);
  }
  getch();
}
