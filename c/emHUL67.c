/*****************************************************************************
     Prog.2  Write a program to count No of Positive Values, Nagetive Values
       and Zero from an Arrays.
******************************************************************************/
#include "stdio.h"

#include "devuts.h"
int main()
{
  int a[10], i, p = 0, n = 0, z = 0;
  // clrscr();
  printf("Enter Ten Values:");
  for (i = 0; i <= 9; i++)
  {
    scanf("%d", &a[i]);
    if (a[i] == 0)
    {
      z++;
    }
    else
    {
      if (a[i] > 0)
      {
        p++;
      }
      else
      {
        n++;
      }
    }
  }
  printf("\nPositive Value: %d", p);
  printf("\nNagetive Value: %d", n);
  printf("\nZero Value: %d", z);
  getchar();
  return 0;
}