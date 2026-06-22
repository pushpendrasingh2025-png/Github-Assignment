#include<stdio.h>
int main()
{
    int n,i,j,array[20];
    printf("Enter number of elements in an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&array[i]);
    }
    printf("Duplicate elements in the array are:");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]==array[j])
            {
                printf("%d ",array[i]);
                break;
            }
        }
    }
    return 0;
}