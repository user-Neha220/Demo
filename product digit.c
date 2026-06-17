#include<stdio.h>
#include<conio.h>
int main()
{
    int num,rem;
    interproduct=1;
    printf("enter a number:");
    scanf("%d",&num);
    int temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        interproduct=interproduct*rem;
        temp=temp/10;
    } printf("the product of the digits of %d is %d",num,interproduct);
    return 0;
    }