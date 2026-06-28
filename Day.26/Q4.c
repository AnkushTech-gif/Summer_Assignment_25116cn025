#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    printf("===== Simple Quiz =====\n");

    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n");
    printf("2. Delhi\n");
    printf("3. Kolkata\n");
    printf("4. Chennai\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        score++;
    }

    printf("\n2. How many days are there in a week?\n");
    printf("1. 5\n");
    printf("2. 6\n");
    printf("3. 7\n");
    printf("4. 8\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        score++;
    }

    printf("\n3. Which language is used for system programming?\n");
    printf("1. C\n");
    printf("2. HTML\n");
    printf("3. CSS\n");
    printf("4. SQL\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
    {
        score++;
    }

    printf("\nYour Final Score = %d/3\n", score);

    return 0;
}