#include<stdio.h>
int main()
{
    int num,count=0;
    printf("enter an integer:");
    scanf("%d",&num);
    while (num>0) {
        if(num& 1){
            count++;
        }
        num=num>>1;
    }
    printf("total set bits(1s):%d\n",count);
    return 0;
}
