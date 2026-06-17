#include<stdio.h>
#include<conio.h>
int main()
{
    int n,isprime=1;
    printf("enter a number:");
    scanf("%d",&n);
    if(n<=1)
isprime=0;
for(int i=2;i<=n/2;i++)
{
    if(n%i==0)
    {
        isprime=0;
        break;
    }
}
if(isprime)
    printf("%d is a prime number",n);
else
    printf("%d is not a prime number",n);
getch();
return 0;
}