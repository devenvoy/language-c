#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Complete the following function.

int marks_summation(int *marks, int number_of_students, char gender)
{
    // If gender is b, start from 0, else start from 1
    int start = gender == 'b' ? 0 : 1;
    int total_marks = 0;

    for (int i = start; i < number_of_students; i += 2)
    {
        total_marks += marks[i];
    }
    return total_marks;
}

int main()
{
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *)malloc(number_of_students * sizeof(int));

    for (int student = 0; student < number_of_students; student++)
    {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}