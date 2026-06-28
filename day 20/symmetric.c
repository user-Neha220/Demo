#include<stdio.h>
int main(){
int n,issymmetric=1;
printf("enter the order of the matrix(nxn):");
scanf("%d",&n);
int mat[n][n];
printf("enter elements of the matrix:\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&mat[i][j]);
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(mat[i][j]!=mat[j][i]){
       issymmetric=0;
       break;
        }
    }
    if(!issymmetric)break;
}
if(issymmetric){
    printf("the matrix is symmetric.\n");
}else{
    printf("the matrix is not symmetric.\n");
}
return 0;
}