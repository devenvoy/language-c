#include <stdio.h>

int sum(int k);

int main()
{
    int result = sum(10);
    printf("result = %d", result);

    return 0;
}

int sum(int k)
{
    if (k > 0)
    {	
    	//printf("%d",k);
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
}
