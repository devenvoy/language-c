/****************************************************************************
       Prog.6  Write a program to chake whether given No. Odd and Even.
***************************************************************************/
#include "stdio.h"

#include "devuts.h"
int main()
{
  int n, r;
  clrscr();
  printf("\nEnter Any Nos.:");
  scanf("%d", &n);
  r = n % 2;
  if (r == 0)
  {
    printf("\n No. is Even");
  }
  else
  {
    printf("\n No. is Odd");
  }
  getchar();
  return 0;
}
