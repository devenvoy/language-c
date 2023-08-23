// find how many prime numbers are there btw 2 numbers;
/*
----> if number is divide by itself and gives 0 remainder it is PRIME NUMBER    
-----> in loop number running loop 1 by 1 after range start 
----> if number a divide by b and give remainder 0 
so check condition a=b if condition true so it is prime number 
    A=13
    B=13
    SO A % B will be 0 and both are same so it will be prime number
    */
#include <stdio.h>

int main()
{

    int n1, n2, i, j;
    printf("Enter number range :");
    printf("\n range start :");
    scanf("%d", &n1);
    printf("\n range end:");
    scanf("%d", &n2);

    for (i = n1; i <= n2; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
        {
            printf("%d ", j);
        }
    }

    return 0;
}