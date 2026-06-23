#include<stdio.h>
int linearsearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return-1;
}
int main(){
    int n,key,result;
    printf("enter the number of elements in the array");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d integers:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the number tp search:");
    scanf("%d",&key);
    result=linearsearch(arr,n,key);
    if(result!=-1){
        printf("element found at index:%d(position:%d)\n",result,result+1);
    }else{
        printf("element not found in the array.\n");
    }
    return 0;
}

