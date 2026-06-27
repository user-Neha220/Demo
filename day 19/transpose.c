#include<stdio.h>
int main(){
    int n;
    printf("enter thr order of the matrix(nxn):");
    scanf("%d",&n);
    int mat[n][n],transpose[n][n];
    printf("enter elements of the matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            transpose[i][j]=mat[i][j];
        }
    }
    printf("tranpose of the matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}