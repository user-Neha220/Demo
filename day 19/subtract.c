#include<stdio.h>
int main(){
    int n;
    printf("enter the order of the matrics(nxn):");
    scanf("%d",&n);
    int mat1[n][n],mat2[n][n],diff[n][n];
    printf("enter elements of the first matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter elements of the second matrics:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            diff[i][j]=mat1[i][j]-mat2[i][j];
        }
    }
    printf("difference of matrics:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}