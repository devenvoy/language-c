/*Write a program to calculate perimeter of rectangle.
Take sides, a & b, from the user.*/
#include<stdio.h>
  main(){
  
 
 float a,b ;
 printf("enter first side of rectangle :" );
 scanf("%f" , &a);
 
 printf("enter second side of rectangle:");
 scanf("%f" , &b);
 
 printf("perimeter of the rectangle is :%f", 2*(a+b));
 return 0;
}
