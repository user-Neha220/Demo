#include<stdio.h>
#include<stdlib.h>
intfindmissingnumber(int*arr,int size,int n){
    int expectedsum=n*(n+1)/2;
    int actualsum=0;
    for(int i=0;i<size;i++){
        actualsum+=*(arr+i);
    }
    return expectedsum-actualsum;
}
int main(){
    int size=4;
    int n=5;
    int*arr=(int*)malloc(size*sizeof(int));
    if(arr==NULL){
        printf("memory allocation failed!\n");
        return 1;
    }
    arr[0]=1;
    arr[1]=2;
    arr[2]=4;
    arr[3]=5;
    int missing=findmissingnumber(arr,size,n);
    printf("the missing number is:%d\n",missing);
    free(arr);
    return 0;
}