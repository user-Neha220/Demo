#include<stdio.h>
#include<limits.h>//required for
intINT_MIN;

int main(){
    int arr[100];
    int size,i;
    int first,second;
    printf("enter the number of elements in the array:");
    if(scanf("%d",&size)!=1||size<2){
        printf("error:array must contain at least 2 elements:\n");
        return 1;
    }
    printf("enter %d elements:\n",size);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    first=INT_MIN;
    second=INT_MIN;
    for(i=0;i<size;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]<first)
        {
            second=arr[i];
        }
    }
    if(second==INT_MIN){
        printf("there is no distinct second largest element(all element might be identical).\n");
    }else{
        printf("the largest element is:%d\n",first);
        printf("the second largest element is:%d\n",second);
    }
    return 0;
}

    









