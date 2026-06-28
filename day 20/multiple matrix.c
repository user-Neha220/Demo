#include<stdio.h>
int main(){
    int n;
    printf("enter the order of the matrix(nxn):");
    scanf("%d",&n);
    int mat1[n][n],mat2[n][n],product[n][n];
    printf("enter elements of the first matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter elements of the second matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",mat2[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            product[i][j]=0;
            for(int k=0;k<n;k++){
                product[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    printf("\nproduct of matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}