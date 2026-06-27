#include<stdio.h>
#include<stdlib.h>
int compare(const void*a,const void*b)
{
    return((int)a-(int)b);
}
int removeduplicate(int*arr,int size){
    if(size==0||size==1)return size;
    qsort(arr,size,sizeof(int),compare);
    int uniqueindex=0;
    for(int i=0;i<size;i++){
        if(*(arr+i)!=*(arr+uniqueindex)){
            uniqueindex++;
            *(arr+uniqueindex)=*(arr+i);
        }
    }
    return uniqueindex+1;
}
int main(){
    int size=7;
    int*arr=(int*)malloc(size*sizeof(int));
    if(arr==NULL){
        printf("memory allocation failed!\n");
        return 1;
    }
    arr=4;
    arr=2;
    arr=2;
    arr=1;
    arr=4;
    arr=3;
    arr=1;
    int newsize=removeduplicates(arr,size);
    printf("array after removing duplicates:");
    for(int i=0;i<newsize;i++){
        printf("%d",*(arr+i));
    }
        printf("\n");
        free(arr);
        return 0;
}
    
