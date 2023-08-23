// print sum of n number from o 
// using for loop; do_while loop; while loop;


#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    printf("\n\t*** IT WILL GIVE SUM OF N NUMBERS YOU ENTER ***");
    printf("\n\n\t*** Enter a number here :");
    scanf("%d", &n);
    for (i = 0; i <= n; i++) // for loop
    {
        sum += i;
    }
    printf("\nsum of %d number from 0  is %d", n, sum);

    int c = 0, sun = 0;
    while (c <= 4) // while loop
    {
        sun += c;
        c++;
    }
    printf("\nsum of 4 number from 0  is %d", sun);

    int e = 0, sus = 0;
   do               // do while loop
    {
        sus += e;
        e++;
    } while (e <= 4);
    printf("\nsum of 4 number from 0  is %d", sus);

    return 0;
}
