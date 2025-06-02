// store information of 5 student using structur and print it

#include <stdio.h>


struct student
{
    int rollno;
    char name[20];
};

void main()
{
    struct student s[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter Roll No. : ");
        scanf("%d", &s[i].rollno);
        printf("\nEnter Name : ");
        scanf("%s", s[i].name);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\nRoll No. : %d", s[i].rollno);
        printf("\nName : %s", s[i].name);
    }
    getchar();
    return 0;
}
