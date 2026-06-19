#include<stdio.h>
int addnumbers(int x,int y){
    return x+y;
}
int main(){
    int a,b,sum=0;
    printf("enter two integers:");
    scanf("%d%d",&a,&b);
    sum=addnumbers(a,b);
    printf("sum:%d",sum);
    return 0;
}