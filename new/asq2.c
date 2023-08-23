/* Write a C program that creates structure Employee with id, name and salary.
Enter data of five employees.
Display data of those employees whose salary is less than 15000.
*/
#include <stdio.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};

int main(void) {
    struct Employee emp[10];
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the details of employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\nEmployees with salary less than 15000:\n");
    printf("ID \t\t Name \t\t Salary\n");
    for (i = 0; i < n; i++) {
        if (emp[i].salary < 15000) {
            printf("%3d %10s \t\t %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
        }
    }

    return 0;
}
