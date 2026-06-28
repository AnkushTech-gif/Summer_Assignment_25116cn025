#include <stdio.h>

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

    printf("\n----- Student Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll Number : %d", roll[i]);
        printf("\nName        : %s", name[i]);
        printf("\nMarks       : %d\n", marks[i]);
    }

    return 0;
}