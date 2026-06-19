#include<stdio.h>
#include<stdbool.h>
int find_maximum(int arr[],int size){
    int max_val=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max_val){
            max_val=arr[i];
        }
    }
    return max_val;
}