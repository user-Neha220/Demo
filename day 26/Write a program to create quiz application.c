#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("===== C Quiz =====\n");

    printf("\nQ1. Who developed C language?\n");
    printf("1. Dennis Ritchie\n2. Bjarne Stroustrup\n3. James Gosling\n4. Guido van Rossum\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\nQ2. Which symbol is used for comments in C?\n");
    printf("1. //\n2. ##\n3. <!-- -->\n4. **\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\nQ3. Which function is used to print output?\n");
    printf("1. scanf()\n2. printf()\n3. gets()\n4. puts()\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\nQ4. Which header file is required for printf()?\n");
    printf("1. math.h\n2. stdio.h\n3. string.h\n4. conio.h\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\nQ5. C is a ______ language.\n");
    printf("1. High-Level\n2. Low-Level\n3. Middle-Level\n4. Assembly\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if(answer == 3)
        score++;

    printf("\n=======================\n");
    printf("Your Score = %d/5\n", score);

    if(score == 5)
        printf("Excellent!\n");
    else if(score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}