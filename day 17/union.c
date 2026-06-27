#include<stdio.h>
int findunion(int arr1[],int size1,int arr2[],int size2,int unionarr[]){
    int usize=0;
    for(int i=0;i<size1;i++){
        int isduplicate=0;
        for(int j=0;j<usize;j++){
            if(arr1[i]==unionarr[j]){
                isduplicate=1;
                break;
            }
        }
        if(!isduplicate){
            unionarr[usize]=arr1[i];
            usize++;
        }
    }
    for(int i=0;i<size2;i++){
        int isduplicate=0;
        for(int j=0;j<usize;j++){
            if(arr2[i]==unionarr[j]){
                isduplicate=1;
                break;
            }
        }
        if(!isduplicate){
            unionarr[usize]=arr2[i];
            usize++;
        }
    }
    return usize;
}
int main(){
    int arr1[]={1,3,4,5,4,1};
    int arr2[]={2,3,5,6,3};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int unionarr[size1+size2];
    int unionsize=findunion(arr1,size1,arr2,size2,unionarr);
    printf("union of the array:");
    for(int i=0;i<unionsize;i++){
        printf("%d",unionarr[i]);
    }
    printf("\n");
    return 0;
}