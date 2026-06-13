#include <stdio.h>

int palindrome(int n)
{
    int reverse = 0, digit, temp;

    temp = n;

    while(temp != 0)
    {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    if(reverse == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(palindrome(num))
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not a Palindrome Number");
    }

    return 0;
}