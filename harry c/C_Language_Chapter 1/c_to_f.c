#include<stdio.h>

int main(){
    float celsius;
    float far;
    printf("Enter current temperature in celsius: ");
    scanf("%f" , &celsius );
    far = (celsius * 9 / 5) + 32;
    printf("The value of this celsius temperature in Fahrenheit is %f", far);
    return 0;
}