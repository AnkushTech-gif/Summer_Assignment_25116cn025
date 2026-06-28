#include <stdio.h>

int main()
{
    char books[10][50];
    int n, i, choice;

    printf("Enter number of books: ");
    scanf("%d", &n);

    printf("Enter book names:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%s", books[i]);
    }

    do
    {
        printf("\n===== MINI LIBRARY =====\n");
        printf("1. Display Books\n");
        printf("2. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nAvailable Books:\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d. %s\n", i + 1, books[i]);
                }
                break;

            case 2:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 2);

    return 0;
}