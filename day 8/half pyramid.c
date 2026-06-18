#include<stdio.h>
int main()
{
    int i,j,row;
    printf("enter the numbers of rows:");
    scaf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
