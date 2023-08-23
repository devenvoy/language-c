// user defined function 
// menu driven program
// keep running until user tell you to exit 


#include<stdio.h>
void f1();
void f2();
void main()
{
  int ch;
  while(1)
  {
    printf("\n Fetch Capital City");
    printf("\n 1.Guj");
    printf("\n 2.Mh");
    printf("\n 3.UP");
    printf("\n 4.MP");
    printf("\n 5.RJ");
    printf("\n 6.Exit");
    printf("\n Enter your choice=>");
    scanf("%d",&ch);
    if(ch==6)
      break;
    switch(ch)
    {
      case 1:
        printf("\n Ghandhinagar");
        f1();
      break;
      
      case 2:
        printf("\n Mumbai");
        f2();
      break;
      
      case 3:
        printf("\n Lucknow \n");
      break;
    
      case 4:
        printf("\n Bhopal \n");
      break;
      
      case 5:
        printf("\n Jaipur \n");
      break;      
    }
  }
}
void f1()
{
  printf("\n But i like Surat \n ");
}
void f2()
{
  printf("\n And i like vadapav \n");
}