#include<stdio.h>
int main()
{
    int row=4,column=4,i,j,x[4][4],y[4][4];
    printf("Enter the matrix:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            y[j][i]=x[i][j];
        }
    }
    printf("Matrix after transpose\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",y[i][j]);
        }
        printf("\n");
    }
    return 0;
}