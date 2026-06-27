#include<stdio.h>
int main()
{
    int sum=0,x[3][3],i,j;
    printf("Enter the elements of matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        sum+=x[i][i];
    }
    printf("\nSum of diagonal is: %d\n",sum);
    return 0;
}