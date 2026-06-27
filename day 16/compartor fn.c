#include<stdio.h>
#include<stdlib.h>
int compare(const void*a,const void*b)
{
    return((int)a-(int)b);
}
int findmaxfrequencyelement(int*arr,int*size){
    if(size==0)return-1;
    qsort(arr,size,sizeof(int),compare);
    int maxelement=*(arr+0);
    int maxcount=1;
    int currentcount=1;
    for(int i=1;i<size;i++){
        if(*(arr+1)==*(arr+(i-1))){
            currentcount++;
        }else{
            if(currentcount>maxcount){
                maxcount=currentcount;
                maxelement=*(arr+(i-1));
            }
            currentcount=1;
        }
    }
    if(currentcount>maxcount){
    maxelement=*(arr+ (*size-1));
    }
    return maxelement;
}
int main(){
    int size=7;
    int*arr=(int*)malloc(size*sizeof(int));
    if(arr==NULL){
        printf("memory allocation failed!\n");
        return 1;
    }
    arr[0]=1;
    arr[1]=3;
    arr[2]=2;
    arr[3]=3;
    arr[4]=4;
    arr[5]=3;
    arr[6]=2;
    int maxfreqelement=findmaxfrequencyelement(arr,size);
    printf("maximum frequency element:%d\n",maxfreqelement);
    free(arr);
}
