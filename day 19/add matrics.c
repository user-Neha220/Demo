#include<stdio.h>
int main(){
    int n;
    printf("enter the order of the matrics(nxn):");
    scanf("%d",&n);
    int mat1[n][n],mat2[n][n],sum[n][n];
    printf("enter elements of the first matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter elements of the second matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("sum of matrics:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}