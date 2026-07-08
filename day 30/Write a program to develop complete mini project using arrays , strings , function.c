#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void display(struct Student s[], int n)
{
    int i;

    printf("\n========== STUDENT RECORD ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll No : %d", s[i].roll);
        printf("\nName    : %s", s[i].name);
        printf("\nMarks   : %.2f\n", s[i].marks);
    }
}

void search(struct Student s[], int n)
{
    int roll, i, found = 0;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nRecord Found\n");
            printf("Roll No : %d\n", s[i].roll);
            printf("Name    : %s\n", s[i].name);
            printf("Marks   : %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Record Not Found!\n");
}

int main()
{
    struct Student s[100];
    int n, i, choice;

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Display Records\n");
        printf("2. Search Student\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                display(s, n);
                break;

            case 2:
                search(s, n);
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}