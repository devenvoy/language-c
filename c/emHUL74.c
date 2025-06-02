/*****************************************************************************
     Prog.9  Write a program to find out rivers cummulative total for an
       Array print.
******************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
  int a[10], i, c = 0;
  clrscr();
  printf("Enter Ten Values:");
  for (i = 0; i <= 9; i++)
  {
    scanf("%d", &a[i]);
  }
  for (i = 9; i >= 0; i--)
  {
    c = c + a[i];
    printf("\n %d", c);
  }
  getch();
  return 0;
}