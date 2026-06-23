#include<stdio.h>
int reversearray(int arr[],int size){
    int start=0;
    int end=size-1;
    int temp;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
    start++;
    end--;
    }
    return 0;
}
int printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d",&arr[i]);
    }
    printf("\n");
    return 0;
}
int main(){
    int size;
    printf("enter the size of array:");
    if(scanf("%d",&size)!=1||size<=0){
        printf("invalid array size.\n");
        return 1;
    }
    int arr[size];
    printf("enter %d elements:\n",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\noriginal array:\n");
    printarray(arr,size);
    reversearray(arr,size);
    printf("reversed array:\n");
    printarray(arr,size);
    return 0;
}