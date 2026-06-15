#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    printf("enter the numbers of terms:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("the sum of first %d natural numbers is %d",n,sum);
    getch();        
    return 0;
    }
