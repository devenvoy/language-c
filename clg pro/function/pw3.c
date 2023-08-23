// PASCAL TRIANGLE
/*
      1  <-- its ans of ncr where n=i and r=j index
     1 1        ncr = n!/(r!*(n-r)!)
    1 2 1
   1 3 3 1      <-- loop find ncr for every index
  1 4 6 4 1         and gives values pyramid that we call
 1 5 10 10 5 1      pascal's triangle
1 6 15 20 15 6 1

*/
#include <stdio.h>
int fact(int x)
{
    int facto = 1;
    for (int i = 2; i <= x; i++)
    {
        facto = facto * i;
    }
    return facto;
}
int combo(int n, int r)
{
    int ncr;
    ncr = fact(n) / (fact(r) * fact(n - r));
    return ncr;
}
int main()
{
    int n;
    printf("Enter n :");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            int icj = combo(i, j);
            printf("%d ", icj);
        }
        printf("\n");
    }

    return 0;
}