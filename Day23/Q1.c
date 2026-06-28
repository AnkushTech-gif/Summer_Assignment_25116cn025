#include <stdio.h>

int main()
{
    char str[100];
    int i, j;
    int unique;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        unique = 1;

        for(j = 0; str[j] != '\0'; j++)
        {
            if(i != j && str[i] == str[j])
            {
                unique = 0;
                break;
            }
        }

        if(unique)
        {
            printf("First Non-Repeating Character = %c", str[i]);
            return 0;
        }
    }

    printf("No Non-Repeating Character Found.");

    return 0;
}