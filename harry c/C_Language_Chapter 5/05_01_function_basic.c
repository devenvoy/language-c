#include<stdio.h>
void display(); // Function prototype
int sumvalue();

int main(){
    display(); // Function Call
    return 0;
}

// Function definition
void display(){
    printf("Initializing display function\n");
    printf("This is display\n"); 
    printf("Display function finished its work\n");

    int a = sumvalue();
    printf("sum of value : %d", a);
}

int sumvalue(){
    int b,c;
    int d;
    b=60;
    c=70;
    d=b+c;
    return d;
}