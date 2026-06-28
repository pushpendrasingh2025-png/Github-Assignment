#include<stdio.h>
int main()
{
    int i,j,k,x[2][2],y[2][2],z[2][2];
    printf("Enter elements of 1st Matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter the element[%d][%d]:",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    printf("Enter elements of 2nd Matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter the element[%d][%d]:",i,j);
            scanf("%d",&y[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            z[i][j]=0;
            for(k=0;k<2;k++)
            {
                z[i][j]+=x[i][k]*y[k][j];
            }
        }
    }
    printf("Resultant matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        printf("%d\t",z[i][j]);
        printf("\n");
    }
return 0;
}


