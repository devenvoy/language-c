#include <stdio.h>
void t1();
void t2(int);
int t3();
int t4();
void main()
{
    int x = 10;
    t1();
}

void t1()
{
    int x = 20;
    t2(x);
}

void t2(int a)
{
    t3();
}

int t3()
{
    printf("%d ", t4(100));
    return 0;
}

int t4(int b)
{
    return b*2;
}