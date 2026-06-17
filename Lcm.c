#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,max,lcm;
    printf("enter two positive integers:");
    scanf("%d %d",&n1,&n2);
    max=(n1>n2)?n1:n2;
    lcm=max;
    while(lcm%n1!=0 || lcm%n2!=0)
    {
        lcm+=max;
    }
    printf("lcm of %d and %d is %d",n1,n2,lcm);
    return 0;
    getch();
}
