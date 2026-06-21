#include<stdio.h>
int main(){
    int size;
    int even_count=0;
    int odd_count=0;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter %d elements:\n",size);
    for(int i=0;i<size;i++){
        printf("elements %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            even_count++;//increment even counter
        }else{
            odd_count++;//increment odd counter
        }
    }
    printf("\ntotal even elements:%d\n",even_count);
    printf("total odd elements:%d\n",odd_count);
    return 0;
}