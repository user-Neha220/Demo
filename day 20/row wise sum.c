#include<stdio.h>
int main(){
    int rows,cols;
    printf("enter the number of rows and columns:");
    scanf("%d%d",&rows,&cols);
    int mat[rows][cols];
    printf("enter elementsof the matrix:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nrow-wise sum:\n");
    for(int i=0;i<rows;i++){
        int rowsum=0;
        for(int j=0;j<cols;j++){
rowsum+=mat[i][j];
        }
        printf("sum of row %d=%d\n",i+1,rowsum);
    }
    return 0;
}