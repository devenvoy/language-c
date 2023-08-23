#include <stdio.h>
void f1();
void f2();
void f3();
void main()
{
    printf("\n c-programming");
    f1();
    printf("\n RDBMS");
}

void f1()
{
    printf("\n python");
    f2();
    printf("\n DBMS");
}

void f2()
{
    f3();
}

void f3()
{
    printf("\n JAVA");
}