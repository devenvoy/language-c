/*****************************************************************************
     Prog.5  Write a program to Inter chainge first five elements with last
       five elements.
******************************************************************************/
#include "stdio.h"

#include "devuts.h"
int main()
{
  int a[10], j, i, t;
  clrscr();
  printf("Enter Ten Values:");
  for (i = 0; i <= 9; i++)
  {
    scanf("%d", &a[i]);
  }
  for (i = 0; i <= 4; i++)
  {
    for (j = 5; j <= 9; j++)
    {
      t = a[i];
      a[i] = a[j];
      a[j] = t;
    }
  }
  for (i = 0; i <= 9; i++)
  {
    printf("\n %d", a[i]);
  }
  getchar();
  return 0;
}