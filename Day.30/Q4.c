#include <stdio.h>

void displayStudents(int roll[], char name[][30], int marks[], int n)
{
    int i;

    printf("\n===== STUDENT DETAILS =====\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll Number : %d", roll[i]);
        printf("\nName        : %s", name[i]);
        printf("\nMarks       : %d\n", marks[i]);
    }
}

int main()
{
    int roll[100], marks[100];
    char name[100][30];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }

    displayStudents(roll, name, marks, n);

    return 0;
}