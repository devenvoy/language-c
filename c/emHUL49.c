/****************************************************************************
    Prog.2  Write a program to print Odd No. series till 19.
*****************************************************************************/
#include "stdio.h"

#include "devuts.h"
int main()
{
  int a;
  clrscr();
  a = 1;
  do
  {
    printf("%d ", a);
    a = a + 2;
  } while (a <= 19);
  getchar();
  return 0;
}