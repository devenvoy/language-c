
// PARAMETER AND ARGUMENTS

#include <stdio.h>

void myfunction(char name[])
{ // SINGLE PARAMETER
    printf("Hello %s \n", name);
}

void myFunction(char name1[], int age)
{ // MULTIPLE PARAMETERS
    printf("Hello %s you are %d years old \n", name1, age);
}
int main()
{
    myfunction("lion");
    myfunction("Jenny"); // SINGLE ARGUMENT IN FUNCTION CALL
    myfunction("Anja");

    myFunction("lian", 4);
    myFunction("jenny", 14); // MULTIPLE ARGUMENTS IN FUNCTION CALL
    myFunction("anja", 30);

    return 0;
}
