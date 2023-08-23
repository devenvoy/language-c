// combination 
// ncr = n!/(r!*(n-r)!)
#include <stdio.h>
#include <math.h>
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
    int ncr;                                 // call fact functions for every number
    ncr = fact(n) / (fact(r) * fact(n - r)); // formula of finding ncr
    return ncr;                              // return ncr value
}
int main()
{
    int n;
    printf("Enter n :");
    scanf("%d", &n);
    int r;
    printf("Enter r :");
    scanf("%d", &r);

    int nfact = fact(n);      // n!
    int rfect = fact(r);      // r!
    int nrfact = fact(n - r); // n-r!

    int ncr = combo(n, r);
    printf("%d", ncr);

    return 0;
}