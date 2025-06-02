/*
OUTPUT:-
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *

*/

#include<stdio.h>
#include<conio.h>

void main(){

int i, j,k,n,o;
int count=1, sum = 0;
//clrscr();
printf("enter no:-");
scanf("%d",&n);

for(i=1;i<=n; i++)
 {
     for( j=1; j<=i; j++)
     {
         printf("* ");
     }
    for(k=i;k<n;k++)
    {
        printf("  ");
    }
    for(j=i;j<n;j++)
    {
        printf("  ");
    }
   for(k=1;k<=i;k++)
   {
    printf("* ");
   }
    printf("\n");
 }

getchar();
}
 
