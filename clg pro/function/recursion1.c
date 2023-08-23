#include <stdio.h>
int fact(int);
void main()
{
    int n , ans;
    printf("Enter number : ");
    scanf("%d",&n);
    ans = fact(n);
    printf("\n factoriol of %d is %d", n, ans);
}
int fact(int x)
{
    if (x == 1)
    {
        return 1;
    }
    return x * fact(x - 1);
}
