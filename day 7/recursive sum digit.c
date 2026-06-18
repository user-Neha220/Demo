#include<stdio.h>
int main()
{
    int n,result;
    printf("enter a number:");
    scanf("%d",&n);
    result=sum(n);
    printf("the sum of first %d natural numbers is: %d",n,result);
    return 0;
}
int sum(int n)
{
    if(n!=0)
    {
        return(n%10+sum(n/10));
    }
    else
    {
        return 0;
    }
}