#include<stdio.h>
int main(){
    int n,target,count=0;
    printf("enter number of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++){ 
    scanf("%d",&arr[i]);
}
printf("enter the element to find its frequency: ");
scanf("%d",&target);
for(int i=0;i<n;i++){
    if(arr[i]==target){
        count++;
    }
}
printf("frequency of %d is:%d\n",target,count);
return 0;
}
