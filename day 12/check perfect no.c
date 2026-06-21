#include<stdio.h>
int isperfect(int num){
    if(num<=0)return 0;
    int sum=0;
    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    return(sum==num);
}
int main(){
    int number;
    printf("enter an integer:");
    if(scanf("%d",&number)!=1)return 1;
    if(isperfect(number)){
        printf("%d is a perfect number.\n",number);
    }else{
        printf("%d is not perfect number.\n",number);
    }
    return 0;
}

    