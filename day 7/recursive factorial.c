#include<stdio.h>
int factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*factotial(n-1);
    }
    int main();
    {
        int number=5;
        printf("factorial of %d is %d",number,factorial(number));return 0;
    }
}