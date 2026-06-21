#include<stdio.h>
#include<math.h>
int isarmstrong(int num){
    int original=num;
    int temp=num;
    int digits=0;
    int sum=0;
    while(temp>0){
        digits++;
        temp/=10;
    }
    while(num>0){
        int remainder=num%10;
        sum+=round(pow(remainder,digits));
        num/=10;
    }
    return(sum==original);
    int main();{
        int number;
        printf("enter a integer.");
        if(scanf("%d",&number)!=1)return 1;
        if(isarmstrong(number)){
            printf("%d is an armstrong number.\n",number);
        }else{
            printf("%d is not an armstrong number.\n",number);
        }
        return 0;
    
        }
}
        