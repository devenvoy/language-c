/****************************************************************************
       Prog.8  Write a program to calculate Sum of any to Nos..
*****************************************************************************/
#include "stdio.h"

#include "devuts.h"
int main()
{
    int a, b, c;
    int sum(int, int);
    clrscr();
    printf("Enter Two Nos.");
    scanf("%d %d", &a, &b);
    c = sum(a, b);
    printf("\nSum is %d", c);
    getchar();
  return 0;
}
int sum(int p, int q)
{
    int x;
    x = p + q;
    return (x);
}