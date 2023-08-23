#include <stdio.h>

int main()
{
    int n;
    printf("enter how many number want to print");
    scanf("%d", &n);
    // print value in accending order
    for (int a = 1; a <= n; a++)
    {
        printf("%d\n", a);
    }
    // print value in decending order
    // loop will run until it becomes 0 
    for (int b = 5; b; b--)
    {
        printf("%d\n", b);
    }
    return 0; 
}