#include <stdio.h>

int main()
{
    int id[100];
    float salary[100];
    char name[100][30];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &id[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    printf("\n===== Employee Records =====\n");

    for(i = 0; i < n; i++)
    {
        printf("\nID     : %d", id[i]);
        printf("\nName   : %s", name[i]);
        printf("\nSalary : %.2f\n", salary[i]);
    }

    return 0;
}