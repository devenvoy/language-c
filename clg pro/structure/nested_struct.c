// structure of stucture 
//array of structure



#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct emp
{
    int eid;
    char ename[20];
    struct dob
    {
        int d;
        int m;
        int y;
    }d1;
    int age;
    
};
int main()
{
    int i,n;
    struct emp e1[20];
    
    printf("Enter how many records you want :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        
    }

    
}