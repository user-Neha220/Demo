#include<stdio.h>
#include<conio.h>
int main()
{
    int p,r,s=0,n;
    printf("enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }
    if(p==s){
        printf("the number is a palindrone");
    }
    else{
        printf("the number is not a palindrone");
    }
    getch();
    return 0;
}