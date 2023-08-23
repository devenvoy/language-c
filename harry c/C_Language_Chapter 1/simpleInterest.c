#include<stdio.h>

int main(){
    float principal, rate=4, years;
    printf("Enter principal value:");
    scanf("%f" , &principal);
     printf("Enter period in year:");
    scanf("%f" , &years);
    int simpleInterest = (principal * rate * years)/100;
    printf("The value of simple Interest is %d", simpleInterest);
    return 0;
}