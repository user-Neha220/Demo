#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("enter the number of elements in the first array:");
    scanf("%d",&n1);
    int arr1[n1];
    printf("enter %d elements:",n1);
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter the number of elements in the second array:");
    scanf("%d",&n2);
    int arr2[n2];
    printf("enter %d elements:",n2);
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    n3=n1+n2;
    int mergedarr[n3];
    for(int i=0;i<n1;i++){
        mergedarr[i]=arr1[i];
    }
    for(int i=0;i<n2;i++){
        mergedarr[n1+i]=arr2[i];
    }
    printf("\nthe merged array is:");
    for(int i=0;i<n3;i++){
        printf("%d",mergedarr[i]);
    }
    printf("\n");
    return 0;
}