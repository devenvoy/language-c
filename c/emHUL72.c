/*****************************************************************************
     Prog.7  Write a program to find out meanvalue of each element for an
       Array. ( Average = average - array)
******************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
  int a[10], i, t = 0;
  float p, c;
  // clrscr();
  printf("Enter Ten Values:");
  for (i = 0; i <= 9; i++)
  {
    scanf("%d", &a[i]);
    t = t + a[i];
  }
  p = (float)t / 10;
  for (i = 0; i <= 9; i++)
  {
    c = p - a[i];
    if (c < 0)
    {
      c = c * -1;
    }
    printf("\n %f", c);
  }
  getch();
  return 0;
}