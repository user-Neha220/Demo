#include<stdio.h>
int main(){
    int rows,cols;
    printf("enter the number of rows and columns:");
    scanf("%d%d",&rows,&cols);
    int mat[rows][cols];
    printf("enter elements of the matrix:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",mat[i][j]);
        }
    }
    prinf("\ncolumn-wise sum:\n");
    for(int j=0;j<cols;j++){
        int colsum=0;
        for(int i=0;i<rows;i++){
            colsum+=mat[i][j];
        }
        printf("sum of column %d=%d\n",j+1,colsum);
    }
    return 0;
}