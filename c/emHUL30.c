/****************************************************************************
    Prog.1  Write a program to print Even No. series till 20.
*****************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
  int a;
  clrscr();
  for (a = 2; a <= 20; a = a + 2)
  {
    printf(" %d ", a);
  }
  getch();
  return 0;
}
