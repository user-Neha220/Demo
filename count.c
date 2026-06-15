#include<stdio.h>
#include<conio.h>
int main()
{
    int num,count=0;
    printf("enter a number;");
    scanf("%d",&num);
    while(num!=0)
    {
        num/=10;
        count++;
    }
    printf("number of digits is %d",count);
    getch();
    return 0;
}
