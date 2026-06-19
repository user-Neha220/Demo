#include<stdio.h>
int find_factorial(int n){
    if(n<=1)return 1;
    return n*find_factorial(n-1);
}
int main(){
    int fact_num=12;
    int fact_result=find_factorial(fact_num);
    printf("factorial of %d is: %d\n",fact_num,fact_result);
    return 0;
}