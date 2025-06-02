/*****************************************************************************
     Prog.1  Write a program to take 10 Values into an Array, add 50 to each
       elements and print all.
******************************************************************************/
#include "stdio.h"

void main()
{
  int a[10], i;
  // clrscr();
  printf("Enter Ten Values:");
  for (i = 0; i <= 9; i++)
  {
    scanf("%d", &a[i]);
    a[i] = a[i] + 50;
  }
  for (i = 0; i <= 9; i++)
  {
    printf("\n %d", a[i]);
  }
  getchar();
  return 0;
}