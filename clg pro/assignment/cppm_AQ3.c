// check given number is prime or not
// for prime number :- number should be dividible by 1 or itself
// it not have other smaller product then itself
/*--> here in loop it ask user number then divide it with every posibility until reach limit
------> prime number only  devisible two times (1 and itself ) and give 0 remainder    
----> if number divide and gives remainder 0 , it add count  1 by 1 in loop  
-----> so when count will remain 2 it will be prime number 
 so like above condition make code like this */  


#include <stdio.h>
#include<conio.h>

void main()
{
    int i, n, count = 0;
    printf("enter number to check :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf(" %d is a prime number ", n);
    }
    else
    {
        printf(" %d is not a prime number ", n);
    }
    getchar();
 //   return 0;
}