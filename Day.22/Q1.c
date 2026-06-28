#include <stdio.h>

int main()
{
    char str[100];
    int length = 0, i;
    int palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[length] != '\0')
    {
        length++;
    }

    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome)
    {
        printf("The string is a Palindrome.");
    }
    else
    {
        printf("The string is not a Palindrome.");
    }

    return 0;
}