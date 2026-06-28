#include <stdio.h>

int main()
{
    char name[10][30];
    long long phone[10];
    int n, i;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nContact %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Phone Number: ");
        scanf("%lld", &phone[i]);
    }

    printf("\n----- Contact List -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nName : %s", name[i]);
        printf("\nPhone: %lld\n", phone[i]);
    }

    return 0;
}