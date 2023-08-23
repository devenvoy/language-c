//  permutation
// npr = n!/(n-r)!
#include <stdio.h>

int fact(int x) // its will find factorial of value while calling
{
    int facto = 1;
    for (int i = 2; i <= x; i++)
    {
        facto = facto * i;
    }
    return facto; // return given number factorial
}
int combo(int n, int r)
{
    int npr;                     // call fact functions for every number
    npr = fact(n) / fact(n - r); // formula of finding npr
    return npr;                  // return npr value
}
int main()
{
    int n;
    printf("Enter n :");
    scanf("%d", &n);
    int r;
    printf("Enter r :");
    scanf("%d", &r);

    int npr = combo(n, r);
    printf("%d", npr);

    return 0;
}