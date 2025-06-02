/******************************************************************************
      Prog.1  Write a program to input data and print to student record.
*****************************************************************************/
#include "stdio.h"


struct student
{
 char name[20];
 int no,sub1,sub2,sub3;
};
void main()
{
 struct student Std1,Std2;
 clrscr();
 printf("\n STUDENT-1&2\nRoll No.:");
 scanf(" %d %d",&Std1.no,&Std2.no);
 printf(" Name :");
 scanf(" %s %s",Std1.name,Std2.name);
 printf(" Sub.1 Mark:");
 scanf(" %d %d",&Std1.sub1,&Std2.sub1);
 printf(" Sub.2 Mark:");
 scanf(" %d %d",&Std1.sub2,&Std2.sub2);
 printf(" Sub.3 Mark:");
 scanf(" %d %d",&Std1.sub3,&Std2.sub3);
 printf("\n STUDENT-1\nRoll No.: %d \nName : %s \nSub.1 Mark: %d\nSub.2 Mark: %d\nSub.3 Mark: %d",Std1.no,Std1.name,Std1.sub1,Std1.sub2,Std1.sub3);
 printf("\n STUDENT-2\nRoll No.: %d \nName : %s \nSub.1 Mark: %d\nSub.2 Mark: %d\nSub.3 Mark: %d",Std2.no,Std2.name,Std2.sub1,Std2.sub2,Std2.sub3);
 getchar();
 }
