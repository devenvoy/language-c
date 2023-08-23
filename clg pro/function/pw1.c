#include <stdio.h>
void greet();
int main()
{
    greet(); // function call
    greet();
    greet();

    return 0;
}

void greet()
{
    printf("Good Morning\n");
    printf("How Are You ?\n\n ");
    return; // it tells compiler to finish running function
}