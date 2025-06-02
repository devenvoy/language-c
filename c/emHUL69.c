/*****************************************************************************
     Prog.4  Write a program to convert all Nagetive Nos into Positive Nos.
******************************************************************************/
#include "stdio.h"

#include "devuts.h"
int main()
{
  int a[10], i;
  clrscr();
  printf("Enter Ten Values:");
  for (i = 0; i <= 9; i++)
  {
    scanf("%d", &a[i]);
    if (a[i] <= -1)
    {
      a[i] = a[i] * -1;
    }
  }
  for (i = 0; i <= 9; i++)
  {
    printf("\n %d", a[i]);
  }
  getchar();
  return 0;
}