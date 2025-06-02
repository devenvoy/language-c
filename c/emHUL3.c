/****************************************************************************
	   Prog.3  Write a program to chake whether given No. is
		   Positive OR Negative.
*****************************************************************************/
# include "stdio.h"
# include "devuts.h"

int main()
{
   int n;
   clrscr();
   printf("\nEnter Any No.:");
   scanf ("%d",&n);
   if(n >= 0)
    {
      printf("\n No. is Positive");
    }
    else
     {
       printf("\n No. is Negative");
     }
   getchar();
   return 0;
}
