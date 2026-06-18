#include<stdio.h>
int reverse(int num)
{
    int rev=0;
{
    if(num==0)
    return rev;
    rev=rev*10+num%10;
    return reverse(num/10 );
}
int main();
{
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    reverse(num);
    printf("reversed number: %d",reverse(num));
    return 0;
}
