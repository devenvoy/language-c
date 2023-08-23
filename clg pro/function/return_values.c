// you can use data type instead of void to return values

#include <stdio.h>

int myFunction(int x)
{
  return 5 + x;
}
int myfunction(int a, int b)
{
  return a + b;
}
int mYFunction(int e, int h)
{
  return e + h;
}

int main()
{
  printf("Result is: %d", myFunction(3));

  // RETURN SUM OF FUNCTION WITH ONE PARAMETER

  printf("\nResult is: %d", myfunction(5, 3));

  // RETURN SUM OF FUNCTION WITH MULTIPLE PARAMETERS

  int result = mYFunction(5, 3);
  printf("\nResult is: %d", result);

  // STORE FUNCTION RESULT IN VARIABLE

  return 0;
}

// Outputs 8 (5 + 3)