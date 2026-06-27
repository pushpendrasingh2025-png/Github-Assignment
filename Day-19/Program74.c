#include<stdio.h>
int main()
{
    int i,j,x[10][10],y[10][10],z[10][10],m,n,p,q;
    printf("Enter number of rows and columns of 1st Matrix:");
    scanf("%d%d",&m,&n);
    printf("Enter number of rows and columns of 2nd Matrix:");
    scanf("%d%d",&p,&q);
    
    printf("Enter elements of 1st matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the element[%d][%d]:",i,j);
            scanf("%d",&x[i][j]);
        }
    }

    printf("Enter elements of 2nd matrix:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("Enter the element[%d][%d]:",i,j);
            scanf("%d",&y[i][j]);
        }
    }

    if (m != p || n != q) {
        printf("Matrix subtraction not possible.\n");
        return 0;
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            z[i][j] = x[i][j] - y[i][j];
        }
    }

    printf("Sum matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ", z[i][j]);
        }
        printf("\n");
    }

    return 0;
}
