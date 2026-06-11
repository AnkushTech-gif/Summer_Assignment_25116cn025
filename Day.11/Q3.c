#include <stdio.h>

int isPrime(int n)
{
    int i, count = 0;

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
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

    if(isPrime(num))
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not a Prime Number");
    }

    return 0;
}