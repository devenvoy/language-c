/*
Ex.2 Write a C structure StudentData with
fields: studid,studname,total marks(up to 500).
Read the value of N number StudentData and Display them,
 if the value of total marks of any student is more than 350 then display it’s all data.
*/

#include <stdio.h>


struct student
{
    int studid;
    char studname[20];
    int marks;
};

void main()
{
    int i, n;
    struct student s[10];

    printf("how namy student data you want to add:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\n Enter student id:");
        scanf("%d", &s[i].studid);
        printf("\n Enter student name: ");
        scanf(" %[^\n]s", s[i].studname);
        // gets(s[i].studname);
        // getchar();
        printf("Enter student marks out of(0 to 500)");
        scanf("%d", &s[i].marks);
    }
    printf("\nAll the students who have score more than 350:");
    for (i = 0; i < n; i++)
    {
        if (s[i].marks >= 350)
        {
            printf("\n=>");
            printf("\nstudent id :%d ", s[i].studid);
            printf("\nstudent name: %s ", s[i].studname);
            printf("\nstudents score:%d", s[i].marks);
        }
    }
    getchar();
    return 0;
}