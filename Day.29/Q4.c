#include <stdio.h>

int main()
{
    char item[10][30];
    int quantity[10];
    int n, i;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nItem %d\n", i + 1);

        printf("Enter Item Name: ");
        scanf("%s", item[i]);

        printf("Enter Quantity: ");
        scanf("%d", &quantity[i]);
    }

    printf("\n===== INVENTORY =====\n");

    for(i = 0; i < n; i++)
    {
        printf("Item: %-15s Quantity: %d\n", item[i], quantity[i]);
    }

    return 0;
}