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
  a = 2;
  do
  {
    printf("%d ", a);
    a = a + 2;
  } while (a <= 20);
  getch();
  return 0;
}