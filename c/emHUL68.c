/*****************************************************************************
     Prog.3  Write a program to count No of Odd Values, Even Values
       and Zero from an Arrays.
******************************************************************************/
#include "stdio.h"

#include "devuts.h"
int main()
{
  int a[10], i, r, o = 0, e = 0, z = 0;
  clrscr();
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
      r = a[i] % 2;
      if (r == 0)
      {
        e++;
      }
      else
      {
        o++;
      }
    }
  }
  printf("\nNo of Odd Nos.: %d", o);
  printf("\nNo of Even Nos.: %d", e);
  printf("\nNo of Zero Nos: %d", z);
  getchar();
  return 0;
}