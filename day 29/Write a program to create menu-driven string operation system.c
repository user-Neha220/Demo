#include <stdio.h>
#include <string.h>

int main()
{
    int choice;
    char str1[100], str2[100];

    printf("Enter First String: ");
    scanf(" %[^\n]", str1);

    printf("Enter Second String: ");
    scanf(" %[^\n]", str2);

    do
    {
        printf("\n===== STRING MENU =====\n");
        printf("1. Length of First String\n");
        printf("2. Copy First String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
            {
                char copy[100];
                strcpy(copy, str1);
                printf("Copied String: %s\n", copy);
                break;
            }

            case 3:
            {
                char temp[200];
                strcpy(temp, str1);
                strcat(temp, str2);
                printf("Concatenated String: %s\n", temp);
                break;
            }

            case 4:
                if(strcmp(str1, str2) == 0)
                    printf("Both strings are Equal.\n");
                else
                    printf("Strings are Not Equal.\n");
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}