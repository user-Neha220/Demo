#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    long long factorial=1;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("the factorial of %d is %lld",n,factorial);
    getch();
    return 0;
}