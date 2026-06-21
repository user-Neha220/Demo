#include<stdio.h>
int ispalindrome(int num){
    int original=num;
    int reversed=0,remainder;
    while(num>0){
        remainder=num%10;
        reversed=reversed*10+remainder;
        num/=10;
    }
    return(original==reversed);
}
int main(){
    int number;
    printf("enter an integer.");
    if(scanf("%d",&number)!=1)return 1;
    if(ispalindrome(number)){
        printf("%d is a palindrome.\n",number);
    }else{
        printf("%d is not a palindrome.\n",number);
    }
    return 0;
}