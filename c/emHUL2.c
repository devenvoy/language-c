/****************************************************************************
     Prog.2  Write a program to calculate Bonus as 15% as for the
       given Salary.
*****************************************************************************/
#include "stdio.h"
#include "conio.h"
#include "devuts.h"
int main()
{
  int sal;
  float bon = 0;
  clrscr();
  printf("\nEnter Salary:");
  scanf("%d", &sal);
  if (sal >= 5000)
  {
    bon = sal * .15;
  }
  printf("\nBonus is %f", bon);
  getch();
  return 0;
}
