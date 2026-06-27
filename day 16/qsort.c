#include<stdio.h>
#include<stdlib.h>
int compare(const void*a,const void*b)
{
    return((int)a-(int)b);
}
void findpairwithsum(int*arr,int size,int target){
    qsort(arr,size,sizeof(int),compare);
    int left=0;
    int right=size-1;
    while(left<right){
        int currentsum=*(arr+left)+*(arr+right);
        if(currentsum==target){
            printf("pair found:(%d,%d)\n",*(arr+left),*(arr+right));
            return;
        }else if(currentsum<target){
            left++;
        }else{
            right--;
        }
    }
    printf("no pair found with the given sum.\n");
}
int main(){
    int size=5;
    int targetsum=10;
    int*arr=(int*)malloc(size*sizeof(int));
    if(arr==NULL){
        printf("memory allocation failed!\n");
        return 1;
    }
    arr[0]=2;
    arr[1]=4;
    arr[2]=7;
    arr[3]=3;
    arr[4]=8;
findpairwithsum(arr,size,targetsum);
free(arr);
return 0;
}