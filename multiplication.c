#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("the multiplication table of %d is:\n",num);
    for(int i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
    getch();
    return 0;
}