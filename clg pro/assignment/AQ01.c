/* ASK USERS NAME AND GIVE EM CODE AND ASK  MARKS OF SUBJECT AND GIVE RESULT  */

#include <stdio.h>
#include <conio.h>

int main()
{
    int n1, n2, n3, n4, rno, sum;
    float per;
    char dev[30];

    printf("Enter your name :");
    scanf("%s", &dev);
    printf(" \nEnter your Rollno. ");
    scanf("%d", &rno);
    printf("\nEnter your subjects marks:");
    printf(" \n sub1 ");
    scanf("%d", &n1);
    printf(" \n sub2 ");
    scanf("%d", &n2);
    printf(" \n sub3 ");
    scanf("%d", &n3);
    printf(" \n sub4 ");
    scanf("%d", &n4);
    if (n1 > 100 || n2 > 100 || n3 > 100 || n4 > 100)
    {
        printf("\n INVALID NUMBER");
        
    }

        sum = n1 + n2 + n3 + n4;
        per = sum / 4;
        printf("\n \t Hello!.. %s your Roll no is %d", dev, rno);
        printf("\n%s you got total %d marks and %.2f percentage and ", dev, sum, per);
        if (per < 100){
            
            if (per > 90)
                printf("A+ grade");
            else if (per > 80)
                printf("A grade");
            else if (per > 70)
                printf("B grade");
            else if (per > 60)
                printf("C grade");
            else if (per > 50)
                printf("D grade");
            else if (per > 40)
                printf("E grade");
            else
                printf("you have failed");
            }
        else
            printf("INVALID PERCENTAGE");
    

     //getch();
     return 0;
}
