#include<stdio.h>
void printfibonacci(int n){
    int t1=0,t2=1,nextterm;
    printf("fibonacci series:");
    for(int i=1;i<=n;++i){
        printf("%d",t1);
            nextterm=t1+t2;
            t1=t2;
            t2=nextterm;
        }
            printf("\n");
        }
            int main(){
            int terms;
            printf("enter the number of terms:");
            if(scanf("%d",&terms)!=1)return 1;
            if(terms<=0){
            printf("please enter a positive integer.\n");
        }else{
        printfibonacci(terms);
        }
        return 0;
        }
