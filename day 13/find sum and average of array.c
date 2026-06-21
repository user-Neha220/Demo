#include<stdio.h>
int main(){
    int n,i;
    float sum=0.0,average;
    printf("enter the number of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++){
        printf("element %d:",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    average=sum/n;
    printf("\n sum of the array elements=%.2f\n",sum);
    printf("average of the array elements=%.2f\n",average);
    return 0;
}
