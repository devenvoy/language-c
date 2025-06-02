/*****************************************************************************
     Prog.8  Write a program to find out Cummulative total for an Array.
******************************************************************************/
#include "stdio.h"

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
  for (i = 0; i <= 9; i++)
  {
    c = c + a[i];
    printf("\n %d", c);
  }
  getchar();
  return 0;
}