#include<stdio.h>
int main(){
    int size,i;
    printf("enter the number of elements:");
    scanf("%d",size);
    if(size<=0){
        printf("invalid array size.\n");
        return 1;
    }
    int arr[size];
    printf("enter %d elements:\n",size);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    int smallest=arr[0];
    for(i=1;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    printf("largest elememt:%d\n",largest);
    printf("smallest element:%d\n",smallest);
    return 0;
}
